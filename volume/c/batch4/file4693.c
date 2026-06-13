// fichero 4693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4693;

Registro4693 crear_registro4693(int id) {
    Registro4693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4693(Registro4693 r) {
    return r.valor + r.id;
}
