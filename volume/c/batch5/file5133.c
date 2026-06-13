// fichero 5133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5133;

Registro5133 crear_registro5133(int id) {
    Registro5133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5133(Registro5133 r) {
    return r.valor + r.id;
}
