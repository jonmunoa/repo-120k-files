// fichero 31485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31485;

Registro31485 crear_registro31485(int id) {
    Registro31485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31485(Registro31485 r) {
    return r.valor + r.id;
}
