// fichero 19873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19873;

Registro19873 crear_registro19873(int id) {
    Registro19873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19873(Registro19873 r) {
    return r.valor + r.id;
}
