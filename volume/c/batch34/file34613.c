// fichero 34613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34613;

Registro34613 crear_registro34613(int id) {
    Registro34613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34613(Registro34613 r) {
    return r.valor + r.id;
}
