// fichero 221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro221;

Registro221 crear_registro221(int id) {
    Registro221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro221(Registro221 r) {
    return r.valor + r.id;
}
