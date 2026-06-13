// fichero 15669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15669;

Registro15669 crear_registro15669(int id) {
    Registro15669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15669(Registro15669 r) {
    return r.valor + r.id;
}
