// fichero 8489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8489;

Registro8489 crear_registro8489(int id) {
    Registro8489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8489(Registro8489 r) {
    return r.valor + r.id;
}
