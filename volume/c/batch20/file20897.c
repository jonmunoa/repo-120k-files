// fichero 20897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20897;

Registro20897 crear_registro20897(int id) {
    Registro20897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20897(Registro20897 r) {
    return r.valor + r.id;
}
