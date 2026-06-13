// fichero 3309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3309;

Registro3309 crear_registro3309(int id) {
    Registro3309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3309(Registro3309 r) {
    return r.valor + r.id;
}
