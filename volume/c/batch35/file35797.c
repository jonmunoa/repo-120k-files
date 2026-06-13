// fichero 35797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35797;

Registro35797 crear_registro35797(int id) {
    Registro35797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35797(Registro35797 r) {
    return r.valor + r.id;
}
