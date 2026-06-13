// fichero 24949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24949;

Registro24949 crear_registro24949(int id) {
    Registro24949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24949(Registro24949 r) {
    return r.valor + r.id;
}
