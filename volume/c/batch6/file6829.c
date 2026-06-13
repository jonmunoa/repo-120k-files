// fichero 6829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6829;

Registro6829 crear_registro6829(int id) {
    Registro6829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6829(Registro6829 r) {
    return r.valor + r.id;
}
