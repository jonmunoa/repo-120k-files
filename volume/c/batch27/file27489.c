// fichero 27489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27489;

Registro27489 crear_registro27489(int id) {
    Registro27489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27489(Registro27489 r) {
    return r.valor + r.id;
}
