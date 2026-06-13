// fichero 30041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30041;

Registro30041 crear_registro30041(int id) {
    Registro30041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30041(Registro30041 r) {
    return r.valor + r.id;
}
