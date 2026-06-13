// fichero 49577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49577;

Registro49577 crear_registro49577(int id) {
    Registro49577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49577(Registro49577 r) {
    return r.valor + r.id;
}
