// fichero 52021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52021;

Registro52021 crear_registro52021(int id) {
    Registro52021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52021(Registro52021 r) {
    return r.valor + r.id;
}
