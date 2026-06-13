// fichero 35621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35621;

Registro35621 crear_registro35621(int id) {
    Registro35621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35621(Registro35621 r) {
    return r.valor + r.id;
}
