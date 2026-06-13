// fichero 52613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52613;

Registro52613 crear_registro52613(int id) {
    Registro52613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52613(Registro52613 r) {
    return r.valor + r.id;
}
