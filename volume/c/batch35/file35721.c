// fichero 35721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35721;

Registro35721 crear_registro35721(int id) {
    Registro35721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35721(Registro35721 r) {
    return r.valor + r.id;
}
