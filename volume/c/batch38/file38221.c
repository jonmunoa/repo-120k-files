// fichero 38221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38221;

Registro38221 crear_registro38221(int id) {
    Registro38221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38221(Registro38221 r) {
    return r.valor + r.id;
}
