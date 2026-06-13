// fichero 20501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20501;

Registro20501 crear_registro20501(int id) {
    Registro20501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20501(Registro20501 r) {
    return r.valor + r.id;
}
