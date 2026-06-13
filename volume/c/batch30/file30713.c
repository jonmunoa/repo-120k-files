// fichero 30713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30713;

Registro30713 crear_registro30713(int id) {
    Registro30713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30713(Registro30713 r) {
    return r.valor + r.id;
}
