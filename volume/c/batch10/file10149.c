// fichero 10149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10149;

Registro10149 crear_registro10149(int id) {
    Registro10149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10149(Registro10149 r) {
    return r.valor + r.id;
}
