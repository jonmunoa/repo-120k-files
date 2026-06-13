// fichero 1737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1737;

Registro1737 crear_registro1737(int id) {
    Registro1737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1737(Registro1737 r) {
    return r.valor + r.id;
}
