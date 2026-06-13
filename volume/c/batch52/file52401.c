// fichero 52401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52401;

Registro52401 crear_registro52401(int id) {
    Registro52401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52401(Registro52401 r) {
    return r.valor + r.id;
}
