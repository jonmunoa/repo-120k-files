// fichero 7849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7849;

Registro7849 crear_registro7849(int id) {
    Registro7849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7849(Registro7849 r) {
    return r.valor + r.id;
}
