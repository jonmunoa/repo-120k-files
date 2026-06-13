// fichero 44705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44705;

Registro44705 crear_registro44705(int id) {
    Registro44705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44705(Registro44705 r) {
    return r.valor + r.id;
}
