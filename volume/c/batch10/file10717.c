// fichero 10717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10717;

Registro10717 crear_registro10717(int id) {
    Registro10717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10717(Registro10717 r) {
    return r.valor + r.id;
}
