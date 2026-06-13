// fichero 34429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34429;

Registro34429 crear_registro34429(int id) {
    Registro34429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34429(Registro34429 r) {
    return r.valor + r.id;
}
