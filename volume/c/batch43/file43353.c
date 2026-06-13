// fichero 43353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43353;

Registro43353 crear_registro43353(int id) {
    Registro43353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43353(Registro43353 r) {
    return r.valor + r.id;
}
