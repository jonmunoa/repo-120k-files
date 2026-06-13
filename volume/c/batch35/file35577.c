// fichero 35577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35577;

Registro35577 crear_registro35577(int id) {
    Registro35577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35577(Registro35577 r) {
    return r.valor + r.id;
}
