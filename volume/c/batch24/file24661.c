// fichero 24661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24661;

Registro24661 crear_registro24661(int id) {
    Registro24661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24661(Registro24661 r) {
    return r.valor + r.id;
}
