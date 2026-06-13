// fichero 7217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7217;

Registro7217 crear_registro7217(int id) {
    Registro7217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7217(Registro7217 r) {
    return r.valor + r.id;
}
