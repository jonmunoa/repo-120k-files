// fichero 18941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18941;

Registro18941 crear_registro18941(int id) {
    Registro18941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18941(Registro18941 r) {
    return r.valor + r.id;
}
