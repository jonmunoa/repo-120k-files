// fichero 50265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50265;

Registro50265 crear_registro50265(int id) {
    Registro50265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50265(Registro50265 r) {
    return r.valor + r.id;
}
