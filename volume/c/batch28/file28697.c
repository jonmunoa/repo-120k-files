// fichero 28697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28697;

Registro28697 crear_registro28697(int id) {
    Registro28697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28697(Registro28697 r) {
    return r.valor + r.id;
}
