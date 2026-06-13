// fichero 19445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19445;

Registro19445 crear_registro19445(int id) {
    Registro19445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19445(Registro19445 r) {
    return r.valor + r.id;
}
