// fichero 28425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28425;

Registro28425 crear_registro28425(int id) {
    Registro28425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28425(Registro28425 r) {
    return r.valor + r.id;
}
