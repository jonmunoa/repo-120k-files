// fichero 42657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42657;

Registro42657 crear_registro42657(int id) {
    Registro42657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42657(Registro42657 r) {
    return r.valor + r.id;
}
