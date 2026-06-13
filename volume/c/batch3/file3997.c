// fichero 3997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3997;

Registro3997 crear_registro3997(int id) {
    Registro3997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3997(Registro3997 r) {
    return r.valor + r.id;
}
