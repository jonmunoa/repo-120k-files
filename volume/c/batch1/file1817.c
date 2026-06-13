// fichero 1817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1817;

Registro1817 crear_registro1817(int id) {
    Registro1817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1817(Registro1817 r) {
    return r.valor + r.id;
}
