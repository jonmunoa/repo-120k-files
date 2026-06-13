// fichero 10417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10417;

Registro10417 crear_registro10417(int id) {
    Registro10417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10417(Registro10417 r) {
    return r.valor + r.id;
}
