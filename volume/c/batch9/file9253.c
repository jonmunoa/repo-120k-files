// fichero 9253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9253;

Registro9253 crear_registro9253(int id) {
    Registro9253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9253(Registro9253 r) {
    return r.valor + r.id;
}
