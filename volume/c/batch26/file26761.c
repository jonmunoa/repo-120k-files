// fichero 26761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26761;

Registro26761 crear_registro26761(int id) {
    Registro26761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26761(Registro26761 r) {
    return r.valor + r.id;
}
