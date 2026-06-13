// fichero 33149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33149;

Registro33149 crear_registro33149(int id) {
    Registro33149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33149(Registro33149 r) {
    return r.valor + r.id;
}
