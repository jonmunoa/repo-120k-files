// fichero 53533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53533;

Registro53533 crear_registro53533(int id) {
    Registro53533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53533(Registro53533 r) {
    return r.valor + r.id;
}
