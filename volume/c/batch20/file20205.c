// fichero 20205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20205;

Registro20205 crear_registro20205(int id) {
    Registro20205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20205(Registro20205 r) {
    return r.valor + r.id;
}
