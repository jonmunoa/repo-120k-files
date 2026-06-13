// fichero 36137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36137;

Registro36137 crear_registro36137(int id) {
    Registro36137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36137(Registro36137 r) {
    return r.valor + r.id;
}
