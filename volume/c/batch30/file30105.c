// fichero 30105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30105;

Registro30105 crear_registro30105(int id) {
    Registro30105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30105(Registro30105 r) {
    return r.valor + r.id;
}
