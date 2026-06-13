// fichero 44333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44333;

Registro44333 crear_registro44333(int id) {
    Registro44333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44333(Registro44333 r) {
    return r.valor + r.id;
}
