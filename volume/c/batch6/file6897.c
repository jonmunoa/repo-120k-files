// fichero 6897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6897;

Registro6897 crear_registro6897(int id) {
    Registro6897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6897(Registro6897 r) {
    return r.valor + r.id;
}
