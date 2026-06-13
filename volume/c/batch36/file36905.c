// fichero 36905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36905;

Registro36905 crear_registro36905(int id) {
    Registro36905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36905(Registro36905 r) {
    return r.valor + r.id;
}
