// fichero 13445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13445;

Registro13445 crear_registro13445(int id) {
    Registro13445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13445(Registro13445 r) {
    return r.valor + r.id;
}
