// fichero 10937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10937;

Registro10937 crear_registro10937(int id) {
    Registro10937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10937(Registro10937 r) {
    return r.valor + r.id;
}
