// fichero 44761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44761;

Registro44761 crear_registro44761(int id) {
    Registro44761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44761(Registro44761 r) {
    return r.valor + r.id;
}
