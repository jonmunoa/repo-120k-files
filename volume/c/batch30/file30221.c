// fichero 30221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30221;

Registro30221 crear_registro30221(int id) {
    Registro30221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30221(Registro30221 r) {
    return r.valor + r.id;
}
