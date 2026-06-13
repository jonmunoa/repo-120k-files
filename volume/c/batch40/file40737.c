// fichero 40737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40737;

Registro40737 crear_registro40737(int id) {
    Registro40737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40737(Registro40737 r) {
    return r.valor + r.id;
}
