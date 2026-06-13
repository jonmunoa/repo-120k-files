// fichero 30593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30593;

Registro30593 crear_registro30593(int id) {
    Registro30593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30593(Registro30593 r) {
    return r.valor + r.id;
}
