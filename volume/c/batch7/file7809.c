// fichero 7809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7809;

Registro7809 crear_registro7809(int id) {
    Registro7809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7809(Registro7809 r) {
    return r.valor + r.id;
}
