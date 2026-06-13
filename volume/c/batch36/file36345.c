// fichero 36345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36345;

Registro36345 crear_registro36345(int id) {
    Registro36345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36345(Registro36345 r) {
    return r.valor + r.id;
}
