// fichero 23249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23249;

Registro23249 crear_registro23249(int id) {
    Registro23249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23249(Registro23249 r) {
    return r.valor + r.id;
}
