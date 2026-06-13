// fichero 34209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34209;

Registro34209 crear_registro34209(int id) {
    Registro34209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34209(Registro34209 r) {
    return r.valor + r.id;
}
