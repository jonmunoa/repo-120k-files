// fichero 53985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53985;

Registro53985 crear_registro53985(int id) {
    Registro53985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53985(Registro53985 r) {
    return r.valor + r.id;
}
