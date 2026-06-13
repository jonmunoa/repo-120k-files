// fichero 7369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7369;

Registro7369 crear_registro7369(int id) {
    Registro7369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7369(Registro7369 r) {
    return r.valor + r.id;
}
