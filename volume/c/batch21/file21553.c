// fichero 21553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21553;

Registro21553 crear_registro21553(int id) {
    Registro21553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21553(Registro21553 r) {
    return r.valor + r.id;
}
