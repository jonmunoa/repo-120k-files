// fichero 34129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34129;

Registro34129 crear_registro34129(int id) {
    Registro34129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34129(Registro34129 r) {
    return r.valor + r.id;
}
