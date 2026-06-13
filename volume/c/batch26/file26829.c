// fichero 26829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26829;

Registro26829 crear_registro26829(int id) {
    Registro26829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26829(Registro26829 r) {
    return r.valor + r.id;
}
