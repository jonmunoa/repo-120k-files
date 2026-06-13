// fichero 14805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14805;

Registro14805 crear_registro14805(int id) {
    Registro14805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14805(Registro14805 r) {
    return r.valor + r.id;
}
