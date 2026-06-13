// fichero 39249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39249;

Registro39249 crear_registro39249(int id) {
    Registro39249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39249(Registro39249 r) {
    return r.valor + r.id;
}
