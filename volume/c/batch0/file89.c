// fichero 89 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro89;

Registro89 crear_registro89(int id) {
    Registro89 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro89(Registro89 r) {
    return r.valor + r.id;
}
