// fichero 48705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48705;

Registro48705 crear_registro48705(int id) {
    Registro48705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48705(Registro48705 r) {
    return r.valor + r.id;
}
