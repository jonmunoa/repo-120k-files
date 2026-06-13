// fichero 17849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17849;

Registro17849 crear_registro17849(int id) {
    Registro17849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17849(Registro17849 r) {
    return r.valor + r.id;
}
