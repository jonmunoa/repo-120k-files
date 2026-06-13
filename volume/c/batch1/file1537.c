// fichero 1537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1537;

Registro1537 crear_registro1537(int id) {
    Registro1537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1537(Registro1537 r) {
    return r.valor + r.id;
}
