// fichero 11177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11177;

Registro11177 crear_registro11177(int id) {
    Registro11177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11177(Registro11177 r) {
    return r.valor + r.id;
}
