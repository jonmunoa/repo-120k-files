// fichero 17805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17805;

Registro17805 crear_registro17805(int id) {
    Registro17805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17805(Registro17805 r) {
    return r.valor + r.id;
}
