// fichero 2821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2821;

Registro2821 crear_registro2821(int id) {
    Registro2821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2821(Registro2821 r) {
    return r.valor + r.id;
}
