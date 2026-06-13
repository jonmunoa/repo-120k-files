// fichero 23369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23369;

Registro23369 crear_registro23369(int id) {
    Registro23369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23369(Registro23369 r) {
    return r.valor + r.id;
}
