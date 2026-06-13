// fichero 6397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6397;

Registro6397 crear_registro6397(int id) {
    Registro6397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6397(Registro6397 r) {
    return r.valor + r.id;
}
