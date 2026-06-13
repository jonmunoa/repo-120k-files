// fichero 31249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31249;

Registro31249 crear_registro31249(int id) {
    Registro31249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31249(Registro31249 r) {
    return r.valor + r.id;
}
