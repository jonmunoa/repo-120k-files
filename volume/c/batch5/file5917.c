// fichero 5917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5917;

Registro5917 crear_registro5917(int id) {
    Registro5917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5917(Registro5917 r) {
    return r.valor + r.id;
}
