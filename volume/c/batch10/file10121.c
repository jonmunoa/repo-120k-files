// fichero 10121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10121;

Registro10121 crear_registro10121(int id) {
    Registro10121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10121(Registro10121 r) {
    return r.valor + r.id;
}
