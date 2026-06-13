// fichero 30129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30129;

Registro30129 crear_registro30129(int id) {
    Registro30129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30129(Registro30129 r) {
    return r.valor + r.id;
}
