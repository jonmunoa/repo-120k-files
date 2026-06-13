// fichero 3225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3225;

Registro3225 crear_registro3225(int id) {
    Registro3225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3225(Registro3225 r) {
    return r.valor + r.id;
}
