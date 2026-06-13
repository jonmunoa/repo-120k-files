// fichero 34213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34213;

Registro34213 crear_registro34213(int id) {
    Registro34213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34213(Registro34213 r) {
    return r.valor + r.id;
}
