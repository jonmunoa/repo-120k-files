// fichero 1649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1649;

Registro1649 crear_registro1649(int id) {
    Registro1649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1649(Registro1649 r) {
    return r.valor + r.id;
}
