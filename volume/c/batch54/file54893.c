// fichero 54893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54893;

Registro54893 crear_registro54893(int id) {
    Registro54893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54893(Registro54893 r) {
    return r.valor + r.id;
}
