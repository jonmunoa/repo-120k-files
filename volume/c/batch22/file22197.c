// fichero 22197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22197;

Registro22197 crear_registro22197(int id) {
    Registro22197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22197(Registro22197 r) {
    return r.valor + r.id;
}
