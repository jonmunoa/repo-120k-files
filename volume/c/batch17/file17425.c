// fichero 17425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17425;

Registro17425 crear_registro17425(int id) {
    Registro17425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17425(Registro17425 r) {
    return r.valor + r.id;
}
