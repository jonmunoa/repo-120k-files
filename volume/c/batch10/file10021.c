// fichero 10021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10021;

Registro10021 crear_registro10021(int id) {
    Registro10021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10021(Registro10021 r) {
    return r.valor + r.id;
}
