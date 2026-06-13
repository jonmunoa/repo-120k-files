// fichero 21301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21301;

Registro21301 crear_registro21301(int id) {
    Registro21301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21301(Registro21301 r) {
    return r.valor + r.id;
}
