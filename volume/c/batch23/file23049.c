// fichero 23049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23049;

Registro23049 crear_registro23049(int id) {
    Registro23049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23049(Registro23049 r) {
    return r.valor + r.id;
}
