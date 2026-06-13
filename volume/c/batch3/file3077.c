// fichero 3077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3077;

Registro3077 crear_registro3077(int id) {
    Registro3077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3077(Registro3077 r) {
    return r.valor + r.id;
}
