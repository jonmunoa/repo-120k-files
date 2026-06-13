// fichero 19689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19689;

Registro19689 crear_registro19689(int id) {
    Registro19689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19689(Registro19689 r) {
    return r.valor + r.id;
}
