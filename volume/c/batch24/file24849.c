// fichero 24849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24849;

Registro24849 crear_registro24849(int id) {
    Registro24849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24849(Registro24849 r) {
    return r.valor + r.id;
}
