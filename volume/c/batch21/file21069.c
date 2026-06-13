// fichero 21069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21069;

Registro21069 crear_registro21069(int id) {
    Registro21069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21069(Registro21069 r) {
    return r.valor + r.id;
}
