// fichero 28893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28893;

Registro28893 crear_registro28893(int id) {
    Registro28893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28893(Registro28893 r) {
    return r.valor + r.id;
}
