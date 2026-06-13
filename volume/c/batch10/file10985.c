// fichero 10985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10985;

Registro10985 crear_registro10985(int id) {
    Registro10985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10985(Registro10985 r) {
    return r.valor + r.id;
}
