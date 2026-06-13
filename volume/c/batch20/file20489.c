// fichero 20489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20489;

Registro20489 crear_registro20489(int id) {
    Registro20489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20489(Registro20489 r) {
    return r.valor + r.id;
}
