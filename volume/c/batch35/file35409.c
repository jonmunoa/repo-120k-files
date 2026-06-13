// fichero 35409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35409;

Registro35409 crear_registro35409(int id) {
    Registro35409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35409(Registro35409 r) {
    return r.valor + r.id;
}
