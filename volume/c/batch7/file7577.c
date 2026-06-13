// fichero 7577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7577;

Registro7577 crear_registro7577(int id) {
    Registro7577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7577(Registro7577 r) {
    return r.valor + r.id;
}
