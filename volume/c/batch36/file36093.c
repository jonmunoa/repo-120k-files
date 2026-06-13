// fichero 36093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36093;

Registro36093 crear_registro36093(int id) {
    Registro36093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36093(Registro36093 r) {
    return r.valor + r.id;
}
