// fichero 24609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24609;

Registro24609 crear_registro24609(int id) {
    Registro24609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24609(Registro24609 r) {
    return r.valor + r.id;
}
