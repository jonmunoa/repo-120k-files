// fichero 19709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19709;

Registro19709 crear_registro19709(int id) {
    Registro19709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19709(Registro19709 r) {
    return r.valor + r.id;
}
