// fichero 10689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10689;

Registro10689 crear_registro10689(int id) {
    Registro10689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10689(Registro10689 r) {
    return r.valor + r.id;
}
