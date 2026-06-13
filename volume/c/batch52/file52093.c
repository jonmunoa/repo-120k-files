// fichero 52093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52093;

Registro52093 crear_registro52093(int id) {
    Registro52093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52093(Registro52093 r) {
    return r.valor + r.id;
}
