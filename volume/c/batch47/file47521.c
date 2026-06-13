// fichero 47521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47521;

Registro47521 crear_registro47521(int id) {
    Registro47521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47521(Registro47521 r) {
    return r.valor + r.id;
}
