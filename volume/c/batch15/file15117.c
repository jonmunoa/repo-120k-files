// fichero 15117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15117;

Registro15117 crear_registro15117(int id) {
    Registro15117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15117(Registro15117 r) {
    return r.valor + r.id;
}
