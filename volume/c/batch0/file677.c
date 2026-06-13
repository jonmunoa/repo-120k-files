// fichero 677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro677;

Registro677 crear_registro677(int id) {
    Registro677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro677(Registro677 r) {
    return r.valor + r.id;
}
