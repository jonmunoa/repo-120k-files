// fichero 32897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32897;

Registro32897 crear_registro32897(int id) {
    Registro32897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32897(Registro32897 r) {
    return r.valor + r.id;
}
