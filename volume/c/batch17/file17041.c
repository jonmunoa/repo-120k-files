// fichero 17041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17041;

Registro17041 crear_registro17041(int id) {
    Registro17041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17041(Registro17041 r) {
    return r.valor + r.id;
}
