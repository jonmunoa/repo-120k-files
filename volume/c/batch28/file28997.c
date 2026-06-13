// fichero 28997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28997;

Registro28997 crear_registro28997(int id) {
    Registro28997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28997(Registro28997 r) {
    return r.valor + r.id;
}
