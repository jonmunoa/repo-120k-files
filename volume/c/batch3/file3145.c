// fichero 3145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3145;

Registro3145 crear_registro3145(int id) {
    Registro3145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3145(Registro3145 r) {
    return r.valor + r.id;
}
