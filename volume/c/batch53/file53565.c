// fichero 53565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53565;

Registro53565 crear_registro53565(int id) {
    Registro53565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53565(Registro53565 r) {
    return r.valor + r.id;
}
