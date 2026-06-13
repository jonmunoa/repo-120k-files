// fichero 42789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42789;

Registro42789 crear_registro42789(int id) {
    Registro42789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42789(Registro42789 r) {
    return r.valor + r.id;
}
