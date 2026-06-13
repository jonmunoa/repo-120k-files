// fichero 45393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45393;

Registro45393 crear_registro45393(int id) {
    Registro45393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45393(Registro45393 r) {
    return r.valor + r.id;
}
