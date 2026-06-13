// fichero 35729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35729;

Registro35729 crear_registro35729(int id) {
    Registro35729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35729(Registro35729 r) {
    return r.valor + r.id;
}
