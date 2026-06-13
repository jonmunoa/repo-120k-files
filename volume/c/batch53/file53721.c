// fichero 53721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53721;

Registro53721 crear_registro53721(int id) {
    Registro53721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53721(Registro53721 r) {
    return r.valor + r.id;
}
