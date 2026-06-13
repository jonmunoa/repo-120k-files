// fichero 38789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38789;

Registro38789 crear_registro38789(int id) {
    Registro38789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38789(Registro38789 r) {
    return r.valor + r.id;
}
