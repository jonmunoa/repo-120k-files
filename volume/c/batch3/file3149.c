// fichero 3149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3149;

Registro3149 crear_registro3149(int id) {
    Registro3149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3149(Registro3149 r) {
    return r.valor + r.id;
}
