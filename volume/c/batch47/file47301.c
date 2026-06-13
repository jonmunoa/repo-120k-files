// fichero 47301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47301;

Registro47301 crear_registro47301(int id) {
    Registro47301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47301(Registro47301 r) {
    return r.valor + r.id;
}
