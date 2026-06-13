// fichero 39113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39113;

Registro39113 crear_registro39113(int id) {
    Registro39113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39113(Registro39113 r) {
    return r.valor + r.id;
}
