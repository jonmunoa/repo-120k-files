// fichero 31705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31705;

Registro31705 crear_registro31705(int id) {
    Registro31705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31705(Registro31705 r) {
    return r.valor + r.id;
}
