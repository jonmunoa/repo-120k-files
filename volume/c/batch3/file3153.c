// fichero 3153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3153;

Registro3153 crear_registro3153(int id) {
    Registro3153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3153(Registro3153 r) {
    return r.valor + r.id;
}
