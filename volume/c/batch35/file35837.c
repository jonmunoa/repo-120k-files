// fichero 35837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35837;

Registro35837 crear_registro35837(int id) {
    Registro35837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35837(Registro35837 r) {
    return r.valor + r.id;
}
