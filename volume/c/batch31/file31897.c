// fichero 31897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31897;

Registro31897 crear_registro31897(int id) {
    Registro31897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31897(Registro31897 r) {
    return r.valor + r.id;
}
