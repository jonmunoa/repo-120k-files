// fichero 19721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19721;

Registro19721 crear_registro19721(int id) {
    Registro19721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19721(Registro19721 r) {
    return r.valor + r.id;
}
