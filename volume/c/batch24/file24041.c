// fichero 24041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24041;

Registro24041 crear_registro24041(int id) {
    Registro24041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24041(Registro24041 r) {
    return r.valor + r.id;
}
