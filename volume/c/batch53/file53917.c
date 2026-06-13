// fichero 53917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53917;

Registro53917 crear_registro53917(int id) {
    Registro53917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53917(Registro53917 r) {
    return r.valor + r.id;
}
