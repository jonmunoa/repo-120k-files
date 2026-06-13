// fichero 50509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50509;

Registro50509 crear_registro50509(int id) {
    Registro50509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50509(Registro50509 r) {
    return r.valor + r.id;
}
