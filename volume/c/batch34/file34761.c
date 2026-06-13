// fichero 34761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34761;

Registro34761 crear_registro34761(int id) {
    Registro34761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34761(Registro34761 r) {
    return r.valor + r.id;
}
