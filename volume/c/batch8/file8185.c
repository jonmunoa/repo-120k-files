// fichero 8185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8185;

Registro8185 crear_registro8185(int id) {
    Registro8185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8185(Registro8185 r) {
    return r.valor + r.id;
}
