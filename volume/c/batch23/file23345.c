// fichero 23345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23345;

Registro23345 crear_registro23345(int id) {
    Registro23345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23345(Registro23345 r) {
    return r.valor + r.id;
}
