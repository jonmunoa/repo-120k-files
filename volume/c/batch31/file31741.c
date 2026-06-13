// fichero 31741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31741;

Registro31741 crear_registro31741(int id) {
    Registro31741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31741(Registro31741 r) {
    return r.valor + r.id;
}
