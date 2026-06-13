// fichero 29529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29529;

Registro29529 crear_registro29529(int id) {
    Registro29529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29529(Registro29529 r) {
    return r.valor + r.id;
}
