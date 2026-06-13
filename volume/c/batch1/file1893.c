// fichero 1893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1893;

Registro1893 crear_registro1893(int id) {
    Registro1893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1893(Registro1893 r) {
    return r.valor + r.id;
}
