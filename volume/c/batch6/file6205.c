// fichero 6205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6205;

Registro6205 crear_registro6205(int id) {
    Registro6205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6205(Registro6205 r) {
    return r.valor + r.id;
}
