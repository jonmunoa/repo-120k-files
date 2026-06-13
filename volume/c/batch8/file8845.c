// fichero 8845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8845;

Registro8845 crear_registro8845(int id) {
    Registro8845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8845(Registro8845 r) {
    return r.valor + r.id;
}
