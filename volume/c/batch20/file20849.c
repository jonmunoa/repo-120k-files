// fichero 20849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20849;

Registro20849 crear_registro20849(int id) {
    Registro20849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20849(Registro20849 r) {
    return r.valor + r.id;
}
