// fichero 31545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31545;

Registro31545 crear_registro31545(int id) {
    Registro31545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31545(Registro31545 r) {
    return r.valor + r.id;
}
