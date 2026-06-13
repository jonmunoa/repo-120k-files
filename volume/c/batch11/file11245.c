// fichero 11245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11245;

Registro11245 crear_registro11245(int id) {
    Registro11245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11245(Registro11245 r) {
    return r.valor + r.id;
}
