// fichero 12205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12205;

Registro12205 crear_registro12205(int id) {
    Registro12205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12205(Registro12205 r) {
    return r.valor + r.id;
}
