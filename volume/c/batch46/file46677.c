// fichero 46677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46677;

Registro46677 crear_registro46677(int id) {
    Registro46677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46677(Registro46677 r) {
    return r.valor + r.id;
}
