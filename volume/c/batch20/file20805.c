// fichero 20805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20805;

Registro20805 crear_registro20805(int id) {
    Registro20805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20805(Registro20805 r) {
    return r.valor + r.id;
}
