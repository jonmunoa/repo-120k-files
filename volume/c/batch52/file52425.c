// fichero 52425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52425;

Registro52425 crear_registro52425(int id) {
    Registro52425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52425(Registro52425 r) {
    return r.valor + r.id;
}
