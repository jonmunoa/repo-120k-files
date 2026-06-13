// fichero 7785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7785;

Registro7785 crear_registro7785(int id) {
    Registro7785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7785(Registro7785 r) {
    return r.valor + r.id;
}
