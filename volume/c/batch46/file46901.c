// fichero 46901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46901;

Registro46901 crear_registro46901(int id) {
    Registro46901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46901(Registro46901 r) {
    return r.valor + r.id;
}
