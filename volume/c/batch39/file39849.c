// fichero 39849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39849;

Registro39849 crear_registro39849(int id) {
    Registro39849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39849(Registro39849 r) {
    return r.valor + r.id;
}
