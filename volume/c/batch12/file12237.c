// fichero 12237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12237;

Registro12237 crear_registro12237(int id) {
    Registro12237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12237(Registro12237 r) {
    return r.valor + r.id;
}
