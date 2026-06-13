// fichero 35873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35873;

Registro35873 crear_registro35873(int id) {
    Registro35873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35873(Registro35873 r) {
    return r.valor + r.id;
}
