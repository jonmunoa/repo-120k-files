// fichero 15061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15061;

Registro15061 crear_registro15061(int id) {
    Registro15061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15061(Registro15061 r) {
    return r.valor + r.id;
}
