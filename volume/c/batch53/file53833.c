// fichero 53833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53833;

Registro53833 crear_registro53833(int id) {
    Registro53833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53833(Registro53833 r) {
    return r.valor + r.id;
}
