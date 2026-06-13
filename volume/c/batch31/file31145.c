// fichero 31145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31145;

Registro31145 crear_registro31145(int id) {
    Registro31145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31145(Registro31145 r) {
    return r.valor + r.id;
}
