// fichero 36965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36965;

Registro36965 crear_registro36965(int id) {
    Registro36965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36965(Registro36965 r) {
    return r.valor + r.id;
}
