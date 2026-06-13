// fichero 52841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52841;

Registro52841 crear_registro52841(int id) {
    Registro52841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52841(Registro52841 r) {
    return r.valor + r.id;
}
