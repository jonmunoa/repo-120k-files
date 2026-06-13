// fichero 7629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7629;

Registro7629 crear_registro7629(int id) {
    Registro7629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7629(Registro7629 r) {
    return r.valor + r.id;
}
