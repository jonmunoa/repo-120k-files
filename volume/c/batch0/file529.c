// fichero 529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro529;

Registro529 crear_registro529(int id) {
    Registro529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro529(Registro529 r) {
    return r.valor + r.id;
}
