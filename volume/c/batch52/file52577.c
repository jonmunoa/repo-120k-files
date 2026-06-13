// fichero 52577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52577;

Registro52577 crear_registro52577(int id) {
    Registro52577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52577(Registro52577 r) {
    return r.valor + r.id;
}
