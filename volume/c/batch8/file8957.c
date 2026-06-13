// fichero 8957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8957;

Registro8957 crear_registro8957(int id) {
    Registro8957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8957(Registro8957 r) {
    return r.valor + r.id;
}
