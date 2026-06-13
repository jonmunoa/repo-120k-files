// fichero 31161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31161;

Registro31161 crear_registro31161(int id) {
    Registro31161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31161(Registro31161 r) {
    return r.valor + r.id;
}
