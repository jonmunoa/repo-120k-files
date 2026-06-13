// fichero 3613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3613;

Registro3613 crear_registro3613(int id) {
    Registro3613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3613(Registro3613 r) {
    return r.valor + r.id;
}
