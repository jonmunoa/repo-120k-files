// fichero 24705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24705;

Registro24705 crear_registro24705(int id) {
    Registro24705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24705(Registro24705 r) {
    return r.valor + r.id;
}
