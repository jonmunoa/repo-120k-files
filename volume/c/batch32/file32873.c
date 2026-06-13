// fichero 32873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32873;

Registro32873 crear_registro32873(int id) {
    Registro32873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32873(Registro32873 r) {
    return r.valor + r.id;
}
