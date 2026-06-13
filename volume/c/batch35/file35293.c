// fichero 35293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35293;

Registro35293 crear_registro35293(int id) {
    Registro35293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35293(Registro35293 r) {
    return r.valor + r.id;
}
