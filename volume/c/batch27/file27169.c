// fichero 27169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27169;

Registro27169 crear_registro27169(int id) {
    Registro27169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27169(Registro27169 r) {
    return r.valor + r.id;
}
