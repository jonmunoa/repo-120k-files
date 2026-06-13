// fichero 18125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18125;

Registro18125 crear_registro18125(int id) {
    Registro18125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18125(Registro18125 r) {
    return r.valor + r.id;
}
