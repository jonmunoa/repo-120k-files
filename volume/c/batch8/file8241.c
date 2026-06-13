// fichero 8241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8241;

Registro8241 crear_registro8241(int id) {
    Registro8241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8241(Registro8241 r) {
    return r.valor + r.id;
}
