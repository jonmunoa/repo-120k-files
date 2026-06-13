// fichero 12001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12001;

Registro12001 crear_registro12001(int id) {
    Registro12001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12001(Registro12001 r) {
    return r.valor + r.id;
}
