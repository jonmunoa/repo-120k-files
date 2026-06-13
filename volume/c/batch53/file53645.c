// fichero 53645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53645;

Registro53645 crear_registro53645(int id) {
    Registro53645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53645(Registro53645 r) {
    return r.valor + r.id;
}
