// fichero 18169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18169;

Registro18169 crear_registro18169(int id) {
    Registro18169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18169(Registro18169 r) {
    return r.valor + r.id;
}
