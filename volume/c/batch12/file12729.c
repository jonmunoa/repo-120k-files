// fichero 12729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12729;

Registro12729 crear_registro12729(int id) {
    Registro12729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12729(Registro12729 r) {
    return r.valor + r.id;
}
