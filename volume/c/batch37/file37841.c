// fichero 37841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37841;

Registro37841 crear_registro37841(int id) {
    Registro37841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37841(Registro37841 r) {
    return r.valor + r.id;
}
