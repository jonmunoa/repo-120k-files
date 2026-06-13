// fichero 53477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53477;

Registro53477 crear_registro53477(int id) {
    Registro53477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53477(Registro53477 r) {
    return r.valor + r.id;
}
