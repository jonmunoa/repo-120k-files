// fichero 29965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29965;

Registro29965 crear_registro29965(int id) {
    Registro29965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29965(Registro29965 r) {
    return r.valor + r.id;
}
