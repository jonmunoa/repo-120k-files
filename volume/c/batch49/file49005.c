// fichero 49005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49005;

Registro49005 crear_registro49005(int id) {
    Registro49005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49005(Registro49005 r) {
    return r.valor + r.id;
}
