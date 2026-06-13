// fichero 19437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19437;

Registro19437 crear_registro19437(int id) {
    Registro19437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19437(Registro19437 r) {
    return r.valor + r.id;
}
