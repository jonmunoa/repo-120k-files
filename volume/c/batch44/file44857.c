// fichero 44857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44857;

Registro44857 crear_registro44857(int id) {
    Registro44857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44857(Registro44857 r) {
    return r.valor + r.id;
}
