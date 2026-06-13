// fichero 47053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47053;

Registro47053 crear_registro47053(int id) {
    Registro47053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47053(Registro47053 r) {
    return r.valor + r.id;
}
