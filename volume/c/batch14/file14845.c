// fichero 14845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14845;

Registro14845 crear_registro14845(int id) {
    Registro14845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14845(Registro14845 r) {
    return r.valor + r.id;
}
