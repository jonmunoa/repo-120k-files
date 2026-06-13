// fichero 10865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10865;

Registro10865 crear_registro10865(int id) {
    Registro10865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10865(Registro10865 r) {
    return r.valor + r.id;
}
