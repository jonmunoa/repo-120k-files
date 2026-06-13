// fichero 34729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34729;

Registro34729 crear_registro34729(int id) {
    Registro34729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34729(Registro34729 r) {
    return r.valor + r.id;
}
