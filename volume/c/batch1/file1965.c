// fichero 1965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1965;

Registro1965 crear_registro1965(int id) {
    Registro1965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1965(Registro1965 r) {
    return r.valor + r.id;
}
