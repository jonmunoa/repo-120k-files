// fichero 26805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26805;

Registro26805 crear_registro26805(int id) {
    Registro26805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26805(Registro26805 r) {
    return r.valor + r.id;
}
