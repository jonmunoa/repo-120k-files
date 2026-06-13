// fichero 19161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19161;

Registro19161 crear_registro19161(int id) {
    Registro19161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19161(Registro19161 r) {
    return r.valor + r.id;
}
