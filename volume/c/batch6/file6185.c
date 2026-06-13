// fichero 6185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6185;

Registro6185 crear_registro6185(int id) {
    Registro6185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6185(Registro6185 r) {
    return r.valor + r.id;
}
