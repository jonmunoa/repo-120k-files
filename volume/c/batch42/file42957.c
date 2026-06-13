// fichero 42957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42957;

Registro42957 crear_registro42957(int id) {
    Registro42957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42957(Registro42957 r) {
    return r.valor + r.id;
}
