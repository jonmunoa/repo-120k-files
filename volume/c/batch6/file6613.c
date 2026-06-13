// fichero 6613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6613;

Registro6613 crear_registro6613(int id) {
    Registro6613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6613(Registro6613 r) {
    return r.valor + r.id;
}
