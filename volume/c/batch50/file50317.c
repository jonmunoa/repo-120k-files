// fichero 50317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50317;

Registro50317 crear_registro50317(int id) {
    Registro50317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50317(Registro50317 r) {
    return r.valor + r.id;
}
