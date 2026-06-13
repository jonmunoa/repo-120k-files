// fichero 34077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34077;

Registro34077 crear_registro34077(int id) {
    Registro34077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34077(Registro34077 r) {
    return r.valor + r.id;
}
