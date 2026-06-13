// fichero 7593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7593;

Registro7593 crear_registro7593(int id) {
    Registro7593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7593(Registro7593 r) {
    return r.valor + r.id;
}
