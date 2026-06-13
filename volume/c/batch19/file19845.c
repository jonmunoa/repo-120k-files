// fichero 19845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19845;

Registro19845 crear_registro19845(int id) {
    Registro19845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19845(Registro19845 r) {
    return r.valor + r.id;
}
