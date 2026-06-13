// fichero 6965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6965;

Registro6965 crear_registro6965(int id) {
    Registro6965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6965(Registro6965 r) {
    return r.valor + r.id;
}
