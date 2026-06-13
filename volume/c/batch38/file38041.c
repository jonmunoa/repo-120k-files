// fichero 38041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38041;

Registro38041 crear_registro38041(int id) {
    Registro38041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38041(Registro38041 r) {
    return r.valor + r.id;
}
