// fichero 53521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53521;

Registro53521 crear_registro53521(int id) {
    Registro53521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53521(Registro53521 r) {
    return r.valor + r.id;
}
