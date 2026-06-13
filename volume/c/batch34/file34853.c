// fichero 34853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34853;

Registro34853 crear_registro34853(int id) {
    Registro34853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34853(Registro34853 r) {
    return r.valor + r.id;
}
