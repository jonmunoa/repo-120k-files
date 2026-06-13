// fichero 36489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36489;

Registro36489 crear_registro36489(int id) {
    Registro36489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36489(Registro36489 r) {
    return r.valor + r.id;
}
