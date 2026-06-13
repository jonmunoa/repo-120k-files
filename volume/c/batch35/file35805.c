// fichero 35805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35805;

Registro35805 crear_registro35805(int id) {
    Registro35805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35805(Registro35805 r) {
    return r.valor + r.id;
}
