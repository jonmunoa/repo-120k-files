// fichero 31489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31489;

Registro31489 crear_registro31489(int id) {
    Registro31489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31489(Registro31489 r) {
    return r.valor + r.id;
}
