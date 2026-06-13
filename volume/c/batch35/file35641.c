// fichero 35641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35641;

Registro35641 crear_registro35641(int id) {
    Registro35641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35641(Registro35641 r) {
    return r.valor + r.id;
}
