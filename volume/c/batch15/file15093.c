// fichero 15093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15093;

Registro15093 crear_registro15093(int id) {
    Registro15093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15093(Registro15093 r) {
    return r.valor + r.id;
}
