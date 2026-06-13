// fichero 10953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10953;

Registro10953 crear_registro10953(int id) {
    Registro10953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10953(Registro10953 r) {
    return r.valor + r.id;
}
