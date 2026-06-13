// fichero 52805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52805;

Registro52805 crear_registro52805(int id) {
    Registro52805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52805(Registro52805 r) {
    return r.valor + r.id;
}
