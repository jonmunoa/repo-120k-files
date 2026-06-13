// fichero 36069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36069;

Registro36069 crear_registro36069(int id) {
    Registro36069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36069(Registro36069 r) {
    return r.valor + r.id;
}
