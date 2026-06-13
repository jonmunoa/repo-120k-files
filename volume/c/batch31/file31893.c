// fichero 31893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31893;

Registro31893 crear_registro31893(int id) {
    Registro31893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31893(Registro31893 r) {
    return r.valor + r.id;
}
