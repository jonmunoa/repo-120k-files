// fichero 2345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2345;

Registro2345 crear_registro2345(int id) {
    Registro2345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2345(Registro2345 r) {
    return r.valor + r.id;
}
