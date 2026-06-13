// fichero 34677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34677;

Registro34677 crear_registro34677(int id) {
    Registro34677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34677(Registro34677 r) {
    return r.valor + r.id;
}
