// fichero 21121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21121;

Registro21121 crear_registro21121(int id) {
    Registro21121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21121(Registro21121 r) {
    return r.valor + r.id;
}
