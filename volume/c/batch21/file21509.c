// fichero 21509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21509;

Registro21509 crear_registro21509(int id) {
    Registro21509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21509(Registro21509 r) {
    return r.valor + r.id;
}
