// fichero 22129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22129;

Registro22129 crear_registro22129(int id) {
    Registro22129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22129(Registro22129 r) {
    return r.valor + r.id;
}
