// fichero 24613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24613;

Registro24613 crear_registro24613(int id) {
    Registro24613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24613(Registro24613 r) {
    return r.valor + r.id;
}
