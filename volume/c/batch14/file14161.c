// fichero 14161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14161;

Registro14161 crear_registro14161(int id) {
    Registro14161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14161(Registro14161 r) {
    return r.valor + r.id;
}
