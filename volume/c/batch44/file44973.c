// fichero 44973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44973;

Registro44973 crear_registro44973(int id) {
    Registro44973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44973(Registro44973 r) {
    return r.valor + r.id;
}
