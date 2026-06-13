// fichero 17353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17353;

Registro17353 crear_registro17353(int id) {
    Registro17353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17353(Registro17353 r) {
    return r.valor + r.id;
}
