// fichero 30153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30153;

Registro30153 crear_registro30153(int id) {
    Registro30153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30153(Registro30153 r) {
    return r.valor + r.id;
}
