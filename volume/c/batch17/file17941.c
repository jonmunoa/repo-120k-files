// fichero 17941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17941;

Registro17941 crear_registro17941(int id) {
    Registro17941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17941(Registro17941 r) {
    return r.valor + r.id;
}
