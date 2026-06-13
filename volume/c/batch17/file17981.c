// fichero 17981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17981;

Registro17981 crear_registro17981(int id) {
    Registro17981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17981(Registro17981 r) {
    return r.valor + r.id;
}
