// fichero 28329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28329;

Registro28329 crear_registro28329(int id) {
    Registro28329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28329(Registro28329 r) {
    return r.valor + r.id;
}
