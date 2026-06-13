// fichero 20417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20417;

Registro20417 crear_registro20417(int id) {
    Registro20417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20417(Registro20417 r) {
    return r.valor + r.id;
}
