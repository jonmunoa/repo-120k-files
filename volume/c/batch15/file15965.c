// fichero 15965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15965;

Registro15965 crear_registro15965(int id) {
    Registro15965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15965(Registro15965 r) {
    return r.valor + r.id;
}
