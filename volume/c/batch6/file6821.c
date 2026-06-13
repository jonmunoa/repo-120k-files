// fichero 6821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6821;

Registro6821 crear_registro6821(int id) {
    Registro6821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6821(Registro6821 r) {
    return r.valor + r.id;
}
