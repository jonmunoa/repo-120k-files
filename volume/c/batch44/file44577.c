// fichero 44577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44577;

Registro44577 crear_registro44577(int id) {
    Registro44577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44577(Registro44577 r) {
    return r.valor + r.id;
}
