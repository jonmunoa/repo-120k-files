// fichero 35385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35385;

Registro35385 crear_registro35385(int id) {
    Registro35385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35385(Registro35385 r) {
    return r.valor + r.id;
}
