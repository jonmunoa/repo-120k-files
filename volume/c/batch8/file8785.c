// fichero 8785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8785;

Registro8785 crear_registro8785(int id) {
    Registro8785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8785(Registro8785 r) {
    return r.valor + r.id;
}
