// fichero 10657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10657;

Registro10657 crear_registro10657(int id) {
    Registro10657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10657(Registro10657 r) {
    return r.valor + r.id;
}
