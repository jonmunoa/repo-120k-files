// fichero 52949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52949;

Registro52949 crear_registro52949(int id) {
    Registro52949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52949(Registro52949 r) {
    return r.valor + r.id;
}
