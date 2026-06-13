// fichero 45749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45749;

Registro45749 crear_registro45749(int id) {
    Registro45749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45749(Registro45749 r) {
    return r.valor + r.id;
}
