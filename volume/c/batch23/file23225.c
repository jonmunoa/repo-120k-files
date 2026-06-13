// fichero 23225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23225;

Registro23225 crear_registro23225(int id) {
    Registro23225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23225(Registro23225 r) {
    return r.valor + r.id;
}
