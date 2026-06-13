// fichero 12673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12673;

Registro12673 crear_registro12673(int id) {
    Registro12673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12673(Registro12673 r) {
    return r.valor + r.id;
}
