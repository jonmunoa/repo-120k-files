// fichero 27753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27753;

Registro27753 crear_registro27753(int id) {
    Registro27753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27753(Registro27753 r) {
    return r.valor + r.id;
}
