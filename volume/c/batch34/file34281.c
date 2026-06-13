// fichero 34281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34281;

Registro34281 crear_registro34281(int id) {
    Registro34281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34281(Registro34281 r) {
    return r.valor + r.id;
}
