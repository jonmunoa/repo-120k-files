// fichero 44081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44081;

Registro44081 crear_registro44081(int id) {
    Registro44081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44081(Registro44081 r) {
    return r.valor + r.id;
}
