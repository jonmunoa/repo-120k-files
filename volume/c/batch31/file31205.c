// fichero 31205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31205;

Registro31205 crear_registro31205(int id) {
    Registro31205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31205(Registro31205 r) {
    return r.valor + r.id;
}
