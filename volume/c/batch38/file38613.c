// fichero 38613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38613;

Registro38613 crear_registro38613(int id) {
    Registro38613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38613(Registro38613 r) {
    return r.valor + r.id;
}
