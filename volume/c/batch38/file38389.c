// fichero 38389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38389;

Registro38389 crear_registro38389(int id) {
    Registro38389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38389(Registro38389 r) {
    return r.valor + r.id;
}
