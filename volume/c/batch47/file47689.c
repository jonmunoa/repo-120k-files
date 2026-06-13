// fichero 47689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47689;

Registro47689 crear_registro47689(int id) {
    Registro47689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47689(Registro47689 r) {
    return r.valor + r.id;
}
