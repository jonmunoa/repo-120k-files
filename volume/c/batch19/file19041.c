// fichero 19041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19041;

Registro19041 crear_registro19041(int id) {
    Registro19041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19041(Registro19041 r) {
    return r.valor + r.id;
}
