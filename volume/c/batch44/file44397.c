// fichero 44397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44397;

Registro44397 crear_registro44397(int id) {
    Registro44397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44397(Registro44397 r) {
    return r.valor + r.id;
}
