// fichero 28445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28445;

Registro28445 crear_registro28445(int id) {
    Registro28445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28445(Registro28445 r) {
    return r.valor + r.id;
}
