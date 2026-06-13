// fichero 34189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34189;

Registro34189 crear_registro34189(int id) {
    Registro34189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34189(Registro34189 r) {
    return r.valor + r.id;
}
