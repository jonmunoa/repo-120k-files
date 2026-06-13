// fichero 35677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35677;

Registro35677 crear_registro35677(int id) {
    Registro35677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35677(Registro35677 r) {
    return r.valor + r.id;
}
