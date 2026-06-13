// fichero 4737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4737;

Registro4737 crear_registro4737(int id) {
    Registro4737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4737(Registro4737 r) {
    return r.valor + r.id;
}
