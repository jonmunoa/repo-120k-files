// fichero 28153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28153;

Registro28153 crear_registro28153(int id) {
    Registro28153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28153(Registro28153 r) {
    return r.valor + r.id;
}
