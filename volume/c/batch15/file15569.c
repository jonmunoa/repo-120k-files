// fichero 15569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15569;

Registro15569 crear_registro15569(int id) {
    Registro15569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15569(Registro15569 r) {
    return r.valor + r.id;
}
