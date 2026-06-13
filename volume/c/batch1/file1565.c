// fichero 1565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1565;

Registro1565 crear_registro1565(int id) {
    Registro1565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1565(Registro1565 r) {
    return r.valor + r.id;
}
