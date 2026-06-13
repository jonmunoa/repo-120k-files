// fichero 38309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38309;

Registro38309 crear_registro38309(int id) {
    Registro38309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38309(Registro38309 r) {
    return r.valor + r.id;
}
