// fichero 23781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23781;

Registro23781 crear_registro23781(int id) {
    Registro23781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23781(Registro23781 r) {
    return r.valor + r.id;
}
