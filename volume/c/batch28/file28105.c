// fichero 28105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28105;

Registro28105 crear_registro28105(int id) {
    Registro28105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28105(Registro28105 r) {
    return r.valor + r.id;
}
