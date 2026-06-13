// fichero 17345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17345;

Registro17345 crear_registro17345(int id) {
    Registro17345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17345(Registro17345 r) {
    return r.valor + r.id;
}
