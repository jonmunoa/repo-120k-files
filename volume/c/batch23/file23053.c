// fichero 23053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23053;

Registro23053 crear_registro23053(int id) {
    Registro23053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23053(Registro23053 r) {
    return r.valor + r.id;
}
