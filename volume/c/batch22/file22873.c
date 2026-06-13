// fichero 22873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22873;

Registro22873 crear_registro22873(int id) {
    Registro22873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22873(Registro22873 r) {
    return r.valor + r.id;
}
