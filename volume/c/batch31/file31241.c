// fichero 31241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31241;

Registro31241 crear_registro31241(int id) {
    Registro31241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31241(Registro31241 r) {
    return r.valor + r.id;
}
