// fichero 44545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44545;

Registro44545 crear_registro44545(int id) {
    Registro44545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44545(Registro44545 r) {
    return r.valor + r.id;
}
