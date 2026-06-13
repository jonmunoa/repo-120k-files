// fichero 34805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34805;

Registro34805 crear_registro34805(int id) {
    Registro34805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34805(Registro34805 r) {
    return r.valor + r.id;
}
