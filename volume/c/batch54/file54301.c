// fichero 54301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54301;

Registro54301 crear_registro54301(int id) {
    Registro54301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54301(Registro54301 r) {
    return r.valor + r.id;
}
