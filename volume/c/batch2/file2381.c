// fichero 2381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2381;

Registro2381 crear_registro2381(int id) {
    Registro2381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2381(Registro2381 r) {
    return r.valor + r.id;
}
