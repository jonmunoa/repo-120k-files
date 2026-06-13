// fichero 40965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40965;

Registro40965 crear_registro40965(int id) {
    Registro40965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40965(Registro40965 r) {
    return r.valor + r.id;
}
