// fichero 17381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17381;

Registro17381 crear_registro17381(int id) {
    Registro17381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17381(Registro17381 r) {
    return r.valor + r.id;
}
