// fichero 3849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3849;

Registro3849 crear_registro3849(int id) {
    Registro3849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3849(Registro3849 r) {
    return r.valor + r.id;
}
