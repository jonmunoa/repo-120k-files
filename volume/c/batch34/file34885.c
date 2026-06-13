// fichero 34885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34885;

Registro34885 crear_registro34885(int id) {
    Registro34885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34885(Registro34885 r) {
    return r.valor + r.id;
}
