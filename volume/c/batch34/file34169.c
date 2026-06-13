// fichero 34169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34169;

Registro34169 crear_registro34169(int id) {
    Registro34169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34169(Registro34169 r) {
    return r.valor + r.id;
}
