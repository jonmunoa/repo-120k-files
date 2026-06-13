// fichero 24557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24557;

Registro24557 crear_registro24557(int id) {
    Registro24557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24557(Registro24557 r) {
    return r.valor + r.id;
}
