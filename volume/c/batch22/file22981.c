// fichero 22981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22981;

Registro22981 crear_registro22981(int id) {
    Registro22981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22981(Registro22981 r) {
    return r.valor + r.id;
}
