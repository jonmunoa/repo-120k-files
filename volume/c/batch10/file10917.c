// fichero 10917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10917;

Registro10917 crear_registro10917(int id) {
    Registro10917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10917(Registro10917 r) {
    return r.valor + r.id;
}
