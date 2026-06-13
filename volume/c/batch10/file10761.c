// fichero 10761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10761;

Registro10761 crear_registro10761(int id) {
    Registro10761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10761(Registro10761 r) {
    return r.valor + r.id;
}
