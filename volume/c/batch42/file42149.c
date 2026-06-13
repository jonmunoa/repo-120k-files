// fichero 42149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42149;

Registro42149 crear_registro42149(int id) {
    Registro42149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42149(Registro42149 r) {
    return r.valor + r.id;
}
