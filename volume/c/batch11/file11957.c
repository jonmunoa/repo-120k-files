// fichero 11957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11957;

Registro11957 crear_registro11957(int id) {
    Registro11957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11957(Registro11957 r) {
    return r.valor + r.id;
}
