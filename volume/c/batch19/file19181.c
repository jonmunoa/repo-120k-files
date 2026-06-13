// fichero 19181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19181;

Registro19181 crear_registro19181(int id) {
    Registro19181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19181(Registro19181 r) {
    return r.valor + r.id;
}
