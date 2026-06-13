// fichero 26677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26677;

Registro26677 crear_registro26677(int id) {
    Registro26677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26677(Registro26677 r) {
    return r.valor + r.id;
}
