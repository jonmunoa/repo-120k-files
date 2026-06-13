// fichero 30569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30569;

Registro30569 crear_registro30569(int id) {
    Registro30569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30569(Registro30569 r) {
    return r.valor + r.id;
}
