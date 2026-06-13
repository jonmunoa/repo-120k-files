// fichero 53489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53489;

Registro53489 crear_registro53489(int id) {
    Registro53489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53489(Registro53489 r) {
    return r.valor + r.id;
}
