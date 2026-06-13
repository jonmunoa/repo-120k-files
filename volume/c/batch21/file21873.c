// fichero 21873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21873;

Registro21873 crear_registro21873(int id) {
    Registro21873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21873(Registro21873 r) {
    return r.valor + r.id;
}
