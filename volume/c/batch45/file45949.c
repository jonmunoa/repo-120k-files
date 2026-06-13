// fichero 45949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45949;

Registro45949 crear_registro45949(int id) {
    Registro45949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45949(Registro45949 r) {
    return r.valor + r.id;
}
