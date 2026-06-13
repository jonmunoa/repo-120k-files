// fichero 47865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47865;

Registro47865 crear_registro47865(int id) {
    Registro47865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47865(Registro47865 r) {
    return r.valor + r.id;
}
