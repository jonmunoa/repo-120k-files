// fichero 52333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52333;

Registro52333 crear_registro52333(int id) {
    Registro52333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52333(Registro52333 r) {
    return r.valor + r.id;
}
