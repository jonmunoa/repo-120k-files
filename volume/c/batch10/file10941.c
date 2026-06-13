// fichero 10941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10941;

Registro10941 crear_registro10941(int id) {
    Registro10941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10941(Registro10941 r) {
    return r.valor + r.id;
}
