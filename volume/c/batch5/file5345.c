// fichero 5345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5345;

Registro5345 crear_registro5345(int id) {
    Registro5345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5345(Registro5345 r) {
    return r.valor + r.id;
}
