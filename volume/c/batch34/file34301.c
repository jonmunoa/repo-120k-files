// fichero 34301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34301;

Registro34301 crear_registro34301(int id) {
    Registro34301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34301(Registro34301 r) {
    return r.valor + r.id;
}
