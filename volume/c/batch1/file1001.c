// fichero 1001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1001;

Registro1001 crear_registro1001(int id) {
    Registro1001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1001(Registro1001 r) {
    return r.valor + r.id;
}
