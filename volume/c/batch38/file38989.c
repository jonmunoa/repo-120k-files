// fichero 38989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38989;

Registro38989 crear_registro38989(int id) {
    Registro38989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38989(Registro38989 r) {
    return r.valor + r.id;
}
