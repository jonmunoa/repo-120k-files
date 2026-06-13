// fichero 38113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38113;

Registro38113 crear_registro38113(int id) {
    Registro38113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38113(Registro38113 r) {
    return r.valor + r.id;
}
