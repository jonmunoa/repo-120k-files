// fichero 15241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15241;

Registro15241 crear_registro15241(int id) {
    Registro15241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15241(Registro15241 r) {
    return r.valor + r.id;
}
