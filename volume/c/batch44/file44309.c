// fichero 44309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44309;

Registro44309 crear_registro44309(int id) {
    Registro44309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44309(Registro44309 r) {
    return r.valor + r.id;
}
