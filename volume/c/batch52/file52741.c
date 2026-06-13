// fichero 52741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52741;

Registro52741 crear_registro52741(int id) {
    Registro52741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52741(Registro52741 r) {
    return r.valor + r.id;
}
