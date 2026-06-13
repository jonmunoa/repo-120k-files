// fichero 37817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37817;

Registro37817 crear_registro37817(int id) {
    Registro37817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37817(Registro37817 r) {
    return r.valor + r.id;
}
