// fichero 10265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10265;

Registro10265 crear_registro10265(int id) {
    Registro10265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10265(Registro10265 r) {
    return r.valor + r.id;
}
