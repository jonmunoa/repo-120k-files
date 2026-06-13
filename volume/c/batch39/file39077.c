// fichero 39077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39077;

Registro39077 crear_registro39077(int id) {
    Registro39077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39077(Registro39077 r) {
    return r.valor + r.id;
}
