// fichero 27393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27393;

Registro27393 crear_registro27393(int id) {
    Registro27393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27393(Registro27393 r) {
    return r.valor + r.id;
}
