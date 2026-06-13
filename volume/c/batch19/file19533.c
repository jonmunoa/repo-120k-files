// fichero 19533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19533;

Registro19533 crear_registro19533(int id) {
    Registro19533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19533(Registro19533 r) {
    return r.valor + r.id;
}
