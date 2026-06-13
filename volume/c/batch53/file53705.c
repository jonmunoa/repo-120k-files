// fichero 53705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53705;

Registro53705 crear_registro53705(int id) {
    Registro53705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53705(Registro53705 r) {
    return r.valor + r.id;
}
