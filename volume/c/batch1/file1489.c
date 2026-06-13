// fichero 1489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1489;

Registro1489 crear_registro1489(int id) {
    Registro1489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1489(Registro1489 r) {
    return r.valor + r.id;
}
