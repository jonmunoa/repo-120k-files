// fichero 1793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1793;

Registro1793 crear_registro1793(int id) {
    Registro1793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1793(Registro1793 r) {
    return r.valor + r.id;
}
