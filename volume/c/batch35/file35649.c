// fichero 35649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35649;

Registro35649 crear_registro35649(int id) {
    Registro35649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35649(Registro35649 r) {
    return r.valor + r.id;
}
