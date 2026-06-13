// fichero 38877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38877;

Registro38877 crear_registro38877(int id) {
    Registro38877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38877(Registro38877 r) {
    return r.valor + r.id;
}
