// fichero 24881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24881;

Registro24881 crear_registro24881(int id) {
    Registro24881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24881(Registro24881 r) {
    return r.valor + r.id;
}
