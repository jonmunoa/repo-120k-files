// fichero 11577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11577;

Registro11577 crear_registro11577(int id) {
    Registro11577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11577(Registro11577 r) {
    return r.valor + r.id;
}
