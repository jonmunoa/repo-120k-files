// fichero 42313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42313;

Registro42313 crear_registro42313(int id) {
    Registro42313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42313(Registro42313 r) {
    return r.valor + r.id;
}
