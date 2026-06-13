// fichero 17985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17985;

Registro17985 crear_registro17985(int id) {
    Registro17985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17985(Registro17985 r) {
    return r.valor + r.id;
}
