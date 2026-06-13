// fichero 19837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19837;

Registro19837 crear_registro19837(int id) {
    Registro19837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19837(Registro19837 r) {
    return r.valor + r.id;
}
