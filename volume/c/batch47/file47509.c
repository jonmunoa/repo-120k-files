// fichero 47509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47509;

Registro47509 crear_registro47509(int id) {
    Registro47509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47509(Registro47509 r) {
    return r.valor + r.id;
}
