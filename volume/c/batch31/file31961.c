// fichero 31961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31961;

Registro31961 crear_registro31961(int id) {
    Registro31961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31961(Registro31961 r) {
    return r.valor + r.id;
}
