// fichero 34409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34409;

Registro34409 crear_registro34409(int id) {
    Registro34409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34409(Registro34409 r) {
    return r.valor + r.id;
}
