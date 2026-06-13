// fichero 34245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34245;

Registro34245 crear_registro34245(int id) {
    Registro34245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34245(Registro34245 r) {
    return r.valor + r.id;
}
