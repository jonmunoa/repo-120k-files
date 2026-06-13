// fichero 33041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33041;

Registro33041 crear_registro33041(int id) {
    Registro33041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33041(Registro33041 r) {
    return r.valor + r.id;
}
