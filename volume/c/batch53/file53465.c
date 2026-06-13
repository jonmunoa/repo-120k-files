// fichero 53465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53465;

Registro53465 crear_registro53465(int id) {
    Registro53465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53465(Registro53465 r) {
    return r.valor + r.id;
}
