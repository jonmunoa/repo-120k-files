// fichero 49509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49509;

Registro49509 crear_registro49509(int id) {
    Registro49509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49509(Registro49509 r) {
    return r.valor + r.id;
}
