// fichero 49301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49301;

Registro49301 crear_registro49301(int id) {
    Registro49301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49301(Registro49301 r) {
    return r.valor + r.id;
}
