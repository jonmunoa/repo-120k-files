// fichero 34769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34769;

Registro34769 crear_registro34769(int id) {
    Registro34769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34769(Registro34769 r) {
    return r.valor + r.id;
}
