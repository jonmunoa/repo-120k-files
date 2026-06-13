// fichero 20285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20285;

Registro20285 crear_registro20285(int id) {
    Registro20285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20285(Registro20285 r) {
    return r.valor + r.id;
}
