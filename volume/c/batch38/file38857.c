// fichero 38857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38857;

Registro38857 crear_registro38857(int id) {
    Registro38857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38857(Registro38857 r) {
    return r.valor + r.id;
}
