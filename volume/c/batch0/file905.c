// fichero 905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro905;

Registro905 crear_registro905(int id) {
    Registro905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro905(Registro905 r) {
    return r.valor + r.id;
}
