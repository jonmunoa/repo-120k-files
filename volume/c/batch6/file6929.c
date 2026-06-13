// fichero 6929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6929;

Registro6929 crear_registro6929(int id) {
    Registro6929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6929(Registro6929 r) {
    return r.valor + r.id;
}
