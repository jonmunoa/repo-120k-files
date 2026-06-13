// fichero 36113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36113;

Registro36113 crear_registro36113(int id) {
    Registro36113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36113(Registro36113 r) {
    return r.valor + r.id;
}
