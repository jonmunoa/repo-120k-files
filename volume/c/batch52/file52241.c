// fichero 52241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52241;

Registro52241 crear_registro52241(int id) {
    Registro52241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52241(Registro52241 r) {
    return r.valor + r.id;
}
