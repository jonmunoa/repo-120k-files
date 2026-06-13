// fichero 31873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31873;

Registro31873 crear_registro31873(int id) {
    Registro31873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31873(Registro31873 r) {
    return r.valor + r.id;
}
