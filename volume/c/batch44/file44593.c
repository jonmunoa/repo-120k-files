// fichero 44593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44593;

Registro44593 crear_registro44593(int id) {
    Registro44593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44593(Registro44593 r) {
    return r.valor + r.id;
}
