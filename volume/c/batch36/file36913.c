// fichero 36913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36913;

Registro36913 crear_registro36913(int id) {
    Registro36913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36913(Registro36913 r) {
    return r.valor + r.id;
}
