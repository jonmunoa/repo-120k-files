// fichero 3873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3873;

Registro3873 crear_registro3873(int id) {
    Registro3873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3873(Registro3873 r) {
    return r.valor + r.id;
}
