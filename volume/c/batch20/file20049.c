// fichero 20049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20049;

Registro20049 crear_registro20049(int id) {
    Registro20049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20049(Registro20049 r) {
    return r.valor + r.id;
}
