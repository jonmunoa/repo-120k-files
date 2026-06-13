// fichero 42949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42949;

Registro42949 crear_registro42949(int id) {
    Registro42949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42949(Registro42949 r) {
    return r.valor + r.id;
}
