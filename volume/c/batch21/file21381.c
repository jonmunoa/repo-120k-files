// fichero 21381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21381;

Registro21381 crear_registro21381(int id) {
    Registro21381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21381(Registro21381 r) {
    return r.valor + r.id;
}
