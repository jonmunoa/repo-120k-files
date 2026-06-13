// fichero 31445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31445;

Registro31445 crear_registro31445(int id) {
    Registro31445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31445(Registro31445 r) {
    return r.valor + r.id;
}
