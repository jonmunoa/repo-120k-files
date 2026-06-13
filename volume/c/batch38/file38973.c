// fichero 38973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38973;

Registro38973 crear_registro38973(int id) {
    Registro38973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38973(Registro38973 r) {
    return r.valor + r.id;
}
