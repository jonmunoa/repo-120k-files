// fichero 23913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23913;

Registro23913 crear_registro23913(int id) {
    Registro23913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23913(Registro23913 r) {
    return r.valor + r.id;
}
