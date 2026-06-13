// fichero 21665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21665;

Registro21665 crear_registro21665(int id) {
    Registro21665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21665(Registro21665 r) {
    return r.valor + r.id;
}
