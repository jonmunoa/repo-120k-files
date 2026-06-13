// fichero 8885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8885;

Registro8885 crear_registro8885(int id) {
    Registro8885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8885(Registro8885 r) {
    return r.valor + r.id;
}
