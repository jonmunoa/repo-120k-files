// fichero 24417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24417;

Registro24417 crear_registro24417(int id) {
    Registro24417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24417(Registro24417 r) {
    return r.valor + r.id;
}
