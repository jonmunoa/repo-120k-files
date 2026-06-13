// fichero 34173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34173;

Registro34173 crear_registro34173(int id) {
    Registro34173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34173(Registro34173 r) {
    return r.valor + r.id;
}
