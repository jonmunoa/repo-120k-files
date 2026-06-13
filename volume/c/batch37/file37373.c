// fichero 37373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37373;

Registro37373 crear_registro37373(int id) {
    Registro37373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37373(Registro37373 r) {
    return r.valor + r.id;
}
