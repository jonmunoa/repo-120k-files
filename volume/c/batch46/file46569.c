// fichero 46569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46569;

Registro46569 crear_registro46569(int id) {
    Registro46569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46569(Registro46569 r) {
    return r.valor + r.id;
}
