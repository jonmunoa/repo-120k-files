// fichero 26809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26809;

Registro26809 crear_registro26809(int id) {
    Registro26809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26809(Registro26809 r) {
    return r.valor + r.id;
}
