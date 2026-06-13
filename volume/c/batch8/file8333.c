// fichero 8333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8333;

Registro8333 crear_registro8333(int id) {
    Registro8333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8333(Registro8333 r) {
    return r.valor + r.id;
}
