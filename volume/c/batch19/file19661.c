// fichero 19661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19661;

Registro19661 crear_registro19661(int id) {
    Registro19661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19661(Registro19661 r) {
    return r.valor + r.id;
}
