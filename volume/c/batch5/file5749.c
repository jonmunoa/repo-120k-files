// fichero 5749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5749;

Registro5749 crear_registro5749(int id) {
    Registro5749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5749(Registro5749 r) {
    return r.valor + r.id;
}
