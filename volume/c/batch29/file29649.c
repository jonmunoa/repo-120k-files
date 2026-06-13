// fichero 29649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29649;

Registro29649 crear_registro29649(int id) {
    Registro29649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29649(Registro29649 r) {
    return r.valor + r.id;
}
