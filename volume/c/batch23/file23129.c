// fichero 23129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23129;

Registro23129 crear_registro23129(int id) {
    Registro23129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23129(Registro23129 r) {
    return r.valor + r.id;
}
