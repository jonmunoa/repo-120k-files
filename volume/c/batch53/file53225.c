// fichero 53225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53225;

Registro53225 crear_registro53225(int id) {
    Registro53225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53225(Registro53225 r) {
    return r.valor + r.id;
}
