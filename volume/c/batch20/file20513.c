// fichero 20513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20513;

Registro20513 crear_registro20513(int id) {
    Registro20513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20513(Registro20513 r) {
    return r.valor + r.id;
}
