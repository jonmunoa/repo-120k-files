// fichero 47893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47893;

Registro47893 crear_registro47893(int id) {
    Registro47893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47893(Registro47893 r) {
    return r.valor + r.id;
}
