// fichero 52529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52529;

Registro52529 crear_registro52529(int id) {
    Registro52529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52529(Registro52529 r) {
    return r.valor + r.id;
}
