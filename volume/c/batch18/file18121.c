// fichero 18121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18121;

Registro18121 crear_registro18121(int id) {
    Registro18121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18121(Registro18121 r) {
    return r.valor + r.id;
}
