// fichero 28789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28789;

Registro28789 crear_registro28789(int id) {
    Registro28789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28789(Registro28789 r) {
    return r.valor + r.id;
}
