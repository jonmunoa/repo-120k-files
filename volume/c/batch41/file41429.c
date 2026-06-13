// fichero 41429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41429;

Registro41429 crear_registro41429(int id) {
    Registro41429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41429(Registro41429 r) {
    return r.valor + r.id;
}
