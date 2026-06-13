// fichero 22917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22917;

Registro22917 crear_registro22917(int id) {
    Registro22917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22917(Registro22917 r) {
    return r.valor + r.id;
}
