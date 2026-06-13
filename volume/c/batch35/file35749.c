// fichero 35749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35749;

Registro35749 crear_registro35749(int id) {
    Registro35749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35749(Registro35749 r) {
    return r.valor + r.id;
}
