// fichero 1085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1085;

Registro1085 crear_registro1085(int id) {
    Registro1085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1085(Registro1085 r) {
    return r.valor + r.id;
}
