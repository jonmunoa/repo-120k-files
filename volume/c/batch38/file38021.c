// fichero 38021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38021;

Registro38021 crear_registro38021(int id) {
    Registro38021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38021(Registro38021 r) {
    return r.valor + r.id;
}
