// fichero 41501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41501;

Registro41501 crear_registro41501(int id) {
    Registro41501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41501(Registro41501 r) {
    return r.valor + r.id;
}
