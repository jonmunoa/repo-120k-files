// fichero 37917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37917;

Registro37917 crear_registro37917(int id) {
    Registro37917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37917(Registro37917 r) {
    return r.valor + r.id;
}
