// fichero 53161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53161;

Registro53161 crear_registro53161(int id) {
    Registro53161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53161(Registro53161 r) {
    return r.valor + r.id;
}
