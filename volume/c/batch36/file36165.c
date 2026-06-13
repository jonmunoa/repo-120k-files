// fichero 36165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36165;

Registro36165 crear_registro36165(int id) {
    Registro36165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36165(Registro36165 r) {
    return r.valor + r.id;
}
