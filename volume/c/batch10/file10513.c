// fichero 10513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10513;

Registro10513 crear_registro10513(int id) {
    Registro10513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10513(Registro10513 r) {
    return r.valor + r.id;
}
