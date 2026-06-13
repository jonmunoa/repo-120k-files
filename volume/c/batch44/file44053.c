// fichero 44053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44053;

Registro44053 crear_registro44053(int id) {
    Registro44053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44053(Registro44053 r) {
    return r.valor + r.id;
}
