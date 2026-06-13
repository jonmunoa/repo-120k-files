// fichero 1569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1569;

Registro1569 crear_registro1569(int id) {
    Registro1569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1569(Registro1569 r) {
    return r.valor + r.id;
}
