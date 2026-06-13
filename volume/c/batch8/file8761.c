// fichero 8761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8761;

Registro8761 crear_registro8761(int id) {
    Registro8761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8761(Registro8761 r) {
    return r.valor + r.id;
}
