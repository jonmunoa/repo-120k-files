// fichero 28577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28577;

Registro28577 crear_registro28577(int id) {
    Registro28577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28577(Registro28577 r) {
    return r.valor + r.id;
}
