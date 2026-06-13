// fichero 36089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36089;

Registro36089 crear_registro36089(int id) {
    Registro36089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36089(Registro36089 r) {
    return r.valor + r.id;
}
