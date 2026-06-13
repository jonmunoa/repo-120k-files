// fichero 42569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42569;

Registro42569 crear_registro42569(int id) {
    Registro42569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42569(Registro42569 r) {
    return r.valor + r.id;
}
