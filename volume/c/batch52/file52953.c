// fichero 52953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52953;

Registro52953 crear_registro52953(int id) {
    Registro52953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52953(Registro52953 r) {
    return r.valor + r.id;
}
