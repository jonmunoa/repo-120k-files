// fichero 52533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52533;

Registro52533 crear_registro52533(int id) {
    Registro52533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52533(Registro52533 r) {
    return r.valor + r.id;
}
