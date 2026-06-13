// fichero 9381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9381;

Registro9381 crear_registro9381(int id) {
    Registro9381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9381(Registro9381 r) {
    return r.valor + r.id;
}
