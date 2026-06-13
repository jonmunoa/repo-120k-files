// fichero 7001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7001;

Registro7001 crear_registro7001(int id) {
    Registro7001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7001(Registro7001 r) {
    return r.valor + r.id;
}
