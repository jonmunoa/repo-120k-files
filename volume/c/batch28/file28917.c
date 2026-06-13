// fichero 28917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28917;

Registro28917 crear_registro28917(int id) {
    Registro28917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28917(Registro28917 r) {
    return r.valor + r.id;
}
