#ifndef OTCLIENT_STATS_H
#define OTCLIENT_STATS_H

#include <string>
#include <cstdint>

class UIWidget;

// Definimos los tipos que el código busca (como STATS_LUA)
enum StatsTypes {
    STATS_FIRST = 0,
    STATS_GENERAL = 0,
    STATS_MAIN,
    STATS_RENDER,
    STATS_DISPATCHER,
    STATS_LUA,
    STATS_LUACALLBACK,
    STATS_PACKETS,
    STATS_LAST = STATS_PACKETS
};

struct Stat { uint64_t executionTime = 0; };

class Stats {
public:
    void add(int type, Stat* stats) {}
    std::string get(int type, int limit, bool pretty) { return ""; }
    void clear(int type) {}
    void clearAll() {}
    std::string getSlow(int type, int limit, unsigned int minTime, bool pretty) { return ""; }
    void clearSlow(int type) {}
    int types() { return 0; }
    int64_t getSleepTime() { return 0; }
    void resetSleepTime() {}
    void addWidget(UIWidget* widget) {}
    void removeWidget(UIWidget* widget) {}
    std::string getWidgetsInfo(int limit, bool pretty) { return ""; }
    void addTexture() {}
    void removeTexture() {}
    void addThing() {}
    void removeThing() {}
    void addCreature() {}
    void removeCreature() {}
    int64_t m_sleepTime = 0;
};

extern Stats g_stats;

class AutoStat {
public:
    // Aceptamos cualquier descripción para que no falle el constructor
    AutoStat(int type, const std::string& description, const std::string& extraDescription = "") {}
};

#endif
