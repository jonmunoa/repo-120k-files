// fichero 40237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40237;

Registro40237 crear_registro40237(int id) {
    Registro40237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40237(Registro40237 r) {
    return r.valor + r.id;
}
