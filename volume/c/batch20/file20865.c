// fichero 20865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20865;

Registro20865 crear_registro20865(int id) {
    Registro20865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20865(Registro20865 r) {
    return r.valor + r.id;
}
