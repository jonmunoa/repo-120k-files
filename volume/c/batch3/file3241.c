// fichero 3241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3241;

Registro3241 crear_registro3241(int id) {
    Registro3241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3241(Registro3241 r) {
    return r.valor + r.id;
}
