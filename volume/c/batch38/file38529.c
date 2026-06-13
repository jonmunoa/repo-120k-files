// fichero 38529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38529;

Registro38529 crear_registro38529(int id) {
    Registro38529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38529(Registro38529 r) {
    return r.valor + r.id;
}
