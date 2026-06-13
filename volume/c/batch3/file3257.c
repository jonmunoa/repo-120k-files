// fichero 3257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3257;

Registro3257 crear_registro3257(int id) {
    Registro3257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3257(Registro3257 r) {
    return r.valor + r.id;
}
