// fichero 22849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22849;

Registro22849 crear_registro22849(int id) {
    Registro22849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22849(Registro22849 r) {
    return r.valor + r.id;
}
