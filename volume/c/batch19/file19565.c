// fichero 19565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19565;

Registro19565 crear_registro19565(int id) {
    Registro19565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19565(Registro19565 r) {
    return r.valor + r.id;
}
