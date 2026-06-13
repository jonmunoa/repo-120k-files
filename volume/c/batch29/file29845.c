// fichero 29845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29845;

Registro29845 crear_registro29845(int id) {
    Registro29845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29845(Registro29845 r) {
    return r.valor + r.id;
}
