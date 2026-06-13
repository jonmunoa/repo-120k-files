// fichero 20909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20909;

Registro20909 crear_registro20909(int id) {
    Registro20909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20909(Registro20909 r) {
    return r.valor + r.id;
}
