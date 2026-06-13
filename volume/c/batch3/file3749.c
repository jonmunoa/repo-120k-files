// fichero 3749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3749;

Registro3749 crear_registro3749(int id) {
    Registro3749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3749(Registro3749 r) {
    return r.valor + r.id;
}
