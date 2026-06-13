// fichero 3625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3625;

Registro3625 crear_registro3625(int id) {
    Registro3625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3625(Registro3625 r) {
    return r.valor + r.id;
}
