// fichero 3737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3737;

Registro3737 crear_registro3737(int id) {
    Registro3737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3737(Registro3737 r) {
    return r.valor + r.id;
}
