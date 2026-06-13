// fichero 52705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52705;

Registro52705 crear_registro52705(int id) {
    Registro52705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52705(Registro52705 r) {
    return r.valor + r.id;
}
