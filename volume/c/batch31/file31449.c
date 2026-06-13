// fichero 31449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31449;

Registro31449 crear_registro31449(int id) {
    Registro31449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31449(Registro31449 r) {
    return r.valor + r.id;
}
