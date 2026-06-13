// fichero 36805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36805;

Registro36805 crear_registro36805(int id) {
    Registro36805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36805(Registro36805 r) {
    return r.valor + r.id;
}
