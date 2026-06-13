// fichero 8177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8177;

Registro8177 crear_registro8177(int id) {
    Registro8177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8177(Registro8177 r) {
    return r.valor + r.id;
}
