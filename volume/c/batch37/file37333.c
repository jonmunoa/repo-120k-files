// fichero 37333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37333;

Registro37333 crear_registro37333(int id) {
    Registro37333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37333(Registro37333 r) {
    return r.valor + r.id;
}
