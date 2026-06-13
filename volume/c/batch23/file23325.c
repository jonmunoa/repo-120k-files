// fichero 23325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23325;

Registro23325 crear_registro23325(int id) {
    Registro23325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23325(Registro23325 r) {
    return r.valor + r.id;
}
