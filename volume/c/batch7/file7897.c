// fichero 7897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7897;

Registro7897 crear_registro7897(int id) {
    Registro7897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7897(Registro7897 r) {
    return r.valor + r.id;
}
