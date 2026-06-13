// fichero 4917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4917;

Registro4917 crear_registro4917(int id) {
    Registro4917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4917(Registro4917 r) {
    return r.valor + r.id;
}
