// fichero 44657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44657;

Registro44657 crear_registro44657(int id) {
    Registro44657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44657(Registro44657 r) {
    return r.valor + r.id;
}
