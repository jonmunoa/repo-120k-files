// fichero 38809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38809;

Registro38809 crear_registro38809(int id) {
    Registro38809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38809(Registro38809 r) {
    return r.valor + r.id;
}
