// fichero 20593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20593;

Registro20593 crear_registro20593(int id) {
    Registro20593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20593(Registro20593 r) {
    return r.valor + r.id;
}
