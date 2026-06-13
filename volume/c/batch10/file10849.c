// fichero 10849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10849;

Registro10849 crear_registro10849(int id) {
    Registro10849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10849(Registro10849 r) {
    return r.valor + r.id;
}
