// fichero 14809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14809;

Registro14809 crear_registro14809(int id) {
    Registro14809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14809(Registro14809 r) {
    return r.valor + r.id;
}
