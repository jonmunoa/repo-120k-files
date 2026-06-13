// fichero 12841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12841;

Registro12841 crear_registro12841(int id) {
    Registro12841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12841(Registro12841 r) {
    return r.valor + r.id;
}
