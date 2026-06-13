// fichero 16041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16041;

Registro16041 crear_registro16041(int id) {
    Registro16041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16041(Registro16041 r) {
    return r.valor + r.id;
}
