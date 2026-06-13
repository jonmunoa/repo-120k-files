// fichero 19513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19513;

Registro19513 crear_registro19513(int id) {
    Registro19513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19513(Registro19513 r) {
    return r.valor + r.id;
}
