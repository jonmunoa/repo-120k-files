// fichero 30489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30489;

Registro30489 crear_registro30489(int id) {
    Registro30489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30489(Registro30489 r) {
    return r.valor + r.id;
}
