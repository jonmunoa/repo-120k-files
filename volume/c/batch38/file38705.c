// fichero 38705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38705;

Registro38705 crear_registro38705(int id) {
    Registro38705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38705(Registro38705 r) {
    return r.valor + r.id;
}
