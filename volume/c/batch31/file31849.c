// fichero 31849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31849;

Registro31849 crear_registro31849(int id) {
    Registro31849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31849(Registro31849 r) {
    return r.valor + r.id;
}
