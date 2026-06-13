// fichero 12689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12689;

Registro12689 crear_registro12689(int id) {
    Registro12689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12689(Registro12689 r) {
    return r.valor + r.id;
}
