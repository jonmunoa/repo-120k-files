// fichero 52125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52125;

Registro52125 crear_registro52125(int id) {
    Registro52125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52125(Registro52125 r) {
    return r.valor + r.id;
}
