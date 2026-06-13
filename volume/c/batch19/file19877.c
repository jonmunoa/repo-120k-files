// fichero 19877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19877;

Registro19877 crear_registro19877(int id) {
    Registro19877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19877(Registro19877 r) {
    return r.valor + r.id;
}
