// fichero 10873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10873;

Registro10873 crear_registro10873(int id) {
    Registro10873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10873(Registro10873 r) {
    return r.valor + r.id;
}
