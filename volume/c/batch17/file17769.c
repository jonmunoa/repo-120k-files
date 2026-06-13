// fichero 17769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17769;

Registro17769 crear_registro17769(int id) {
    Registro17769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17769(Registro17769 r) {
    return r.valor + r.id;
}
