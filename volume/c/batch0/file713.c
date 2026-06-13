// fichero 713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro713;

Registro713 crear_registro713(int id) {
    Registro713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro713(Registro713 r) {
    return r.valor + r.id;
}
