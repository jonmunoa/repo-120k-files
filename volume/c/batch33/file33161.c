// fichero 33161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33161;

Registro33161 crear_registro33161(int id) {
    Registro33161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33161(Registro33161 r) {
    return r.valor + r.id;
}
