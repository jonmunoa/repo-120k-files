// fichero 28041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28041;

Registro28041 crear_registro28041(int id) {
    Registro28041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28041(Registro28041 r) {
    return r.valor + r.id;
}
