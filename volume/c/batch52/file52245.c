// fichero 52245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52245;

Registro52245 crear_registro52245(int id) {
    Registro52245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52245(Registro52245 r) {
    return r.valor + r.id;
}
