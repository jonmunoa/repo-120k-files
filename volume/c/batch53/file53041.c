// fichero 53041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53041;

Registro53041 crear_registro53041(int id) {
    Registro53041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53041(Registro53041 r) {
    return r.valor + r.id;
}
