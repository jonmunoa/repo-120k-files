// fichero 24885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24885;

Registro24885 crear_registro24885(int id) {
    Registro24885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24885(Registro24885 r) {
    return r.valor + r.id;
}
