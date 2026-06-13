// fichero 28809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28809;

Registro28809 crear_registro28809(int id) {
    Registro28809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28809(Registro28809 r) {
    return r.valor + r.id;
}
