// fichero 28713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28713;

Registro28713 crear_registro28713(int id) {
    Registro28713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28713(Registro28713 r) {
    return r.valor + r.id;
}
