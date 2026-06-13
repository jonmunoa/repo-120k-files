// fichero 1845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1845;

Registro1845 crear_registro1845(int id) {
    Registro1845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1845(Registro1845 r) {
    return r.valor + r.id;
}
