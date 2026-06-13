// fichero 7857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7857;

Registro7857 crear_registro7857(int id) {
    Registro7857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7857(Registro7857 r) {
    return r.valor + r.id;
}
