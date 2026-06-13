// fichero 12929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12929;

Registro12929 crear_registro12929(int id) {
    Registro12929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12929(Registro12929 r) {
    return r.valor + r.id;
}
