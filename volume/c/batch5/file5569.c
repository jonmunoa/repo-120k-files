// fichero 5569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5569;

Registro5569 crear_registro5569(int id) {
    Registro5569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5569(Registro5569 r) {
    return r.valor + r.id;
}
