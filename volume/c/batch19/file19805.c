// fichero 19805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19805;

Registro19805 crear_registro19805(int id) {
    Registro19805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19805(Registro19805 r) {
    return r.valor + r.id;
}
