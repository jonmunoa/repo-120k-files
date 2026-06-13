// fichero 50641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50641;

Registro50641 crear_registro50641(int id) {
    Registro50641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50641(Registro50641 r) {
    return r.valor + r.id;
}
