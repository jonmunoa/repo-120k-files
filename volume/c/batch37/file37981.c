// fichero 37981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37981;

Registro37981 crear_registro37981(int id) {
    Registro37981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37981(Registro37981 r) {
    return r.valor + r.id;
}
