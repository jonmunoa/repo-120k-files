// fichero 36593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36593;

Registro36593 crear_registro36593(int id) {
    Registro36593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36593(Registro36593 r) {
    return r.valor + r.id;
}
