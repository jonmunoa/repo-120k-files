// fichero 20949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20949;

Registro20949 crear_registro20949(int id) {
    Registro20949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20949(Registro20949 r) {
    return r.valor + r.id;
}
