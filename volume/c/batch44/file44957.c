// fichero 44957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44957;

Registro44957 crear_registro44957(int id) {
    Registro44957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44957(Registro44957 r) {
    return r.valor + r.id;
}
