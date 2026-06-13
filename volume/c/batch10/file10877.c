// fichero 10877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10877;

Registro10877 crear_registro10877(int id) {
    Registro10877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10877(Registro10877 r) {
    return r.valor + r.id;
}
