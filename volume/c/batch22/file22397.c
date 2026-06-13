// fichero 22397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22397;

Registro22397 crear_registro22397(int id) {
    Registro22397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22397(Registro22397 r) {
    return r.valor + r.id;
}
