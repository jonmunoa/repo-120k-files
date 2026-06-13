// fichero 40809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40809;

Registro40809 crear_registro40809(int id) {
    Registro40809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40809(Registro40809 r) {
    return r.valor + r.id;
}
