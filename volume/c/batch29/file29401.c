// fichero 29401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29401;

Registro29401 crear_registro29401(int id) {
    Registro29401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29401(Registro29401 r) {
    return r.valor + r.id;
}
