// fichero 41169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41169;

Registro41169 crear_registro41169(int id) {
    Registro41169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41169(Registro41169 r) {
    return r.valor + r.id;
}
