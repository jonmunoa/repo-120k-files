// fichero 47877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47877;

Registro47877 crear_registro47877(int id) {
    Registro47877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47877(Registro47877 r) {
    return r.valor + r.id;
}
