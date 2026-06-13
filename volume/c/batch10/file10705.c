// fichero 10705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10705;

Registro10705 crear_registro10705(int id) {
    Registro10705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10705(Registro10705 r) {
    return r.valor + r.id;
}
