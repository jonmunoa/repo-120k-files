// fichero 44221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44221;

Registro44221 crear_registro44221(int id) {
    Registro44221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44221(Registro44221 r) {
    return r.valor + r.id;
}
