// fichero 27657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27657;

Registro27657 crear_registro27657(int id) {
    Registro27657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27657(Registro27657 r) {
    return r.valor + r.id;
}
