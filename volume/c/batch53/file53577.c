// fichero 53577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53577;

Registro53577 crear_registro53577(int id) {
    Registro53577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53577(Registro53577 r) {
    return r.valor + r.id;
}
