// fichero 23285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23285;

Registro23285 crear_registro23285(int id) {
    Registro23285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23285(Registro23285 r) {
    return r.valor + r.id;
}
