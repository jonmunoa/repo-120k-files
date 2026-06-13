// fichero 509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro509;

Registro509 crear_registro509(int id) {
    Registro509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro509(Registro509 r) {
    return r.valor + r.id;
}
