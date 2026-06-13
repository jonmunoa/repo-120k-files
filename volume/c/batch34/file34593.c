// fichero 34593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34593;

Registro34593 crear_registro34593(int id) {
    Registro34593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34593(Registro34593 r) {
    return r.valor + r.id;
}
