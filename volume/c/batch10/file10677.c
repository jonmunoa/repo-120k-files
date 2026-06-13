// fichero 10677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10677;

Registro10677 crear_registro10677(int id) {
    Registro10677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10677(Registro10677 r) {
    return r.valor + r.id;
}
