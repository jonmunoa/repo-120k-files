// fichero 10509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10509;

Registro10509 crear_registro10509(int id) {
    Registro10509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10509(Registro10509 r) {
    return r.valor + r.id;
}
