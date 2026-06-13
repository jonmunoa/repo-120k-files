// fichero 8289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8289;

Registro8289 crear_registro8289(int id) {
    Registro8289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8289(Registro8289 r) {
    return r.valor + r.id;
}
