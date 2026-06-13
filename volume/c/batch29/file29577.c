// fichero 29577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29577;

Registro29577 crear_registro29577(int id) {
    Registro29577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29577(Registro29577 r) {
    return r.valor + r.id;
}
