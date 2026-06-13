// fichero 38577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38577;

Registro38577 crear_registro38577(int id) {
    Registro38577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38577(Registro38577 r) {
    return r.valor + r.id;
}
