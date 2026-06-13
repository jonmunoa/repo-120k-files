// fichero 52497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52497;

Registro52497 crear_registro52497(int id) {
    Registro52497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52497(Registro52497 r) {
    return r.valor + r.id;
}
