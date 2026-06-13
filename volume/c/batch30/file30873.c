// fichero 30873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30873;

Registro30873 crear_registro30873(int id) {
    Registro30873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30873(Registro30873 r) {
    return r.valor + r.id;
}
