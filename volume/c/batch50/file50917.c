// fichero 50917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50917;

Registro50917 crear_registro50917(int id) {
    Registro50917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50917(Registro50917 r) {
    return r.valor + r.id;
}
