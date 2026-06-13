// fichero 49001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49001;

Registro49001 crear_registro49001(int id) {
    Registro49001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49001(Registro49001 r) {
    return r.valor + r.id;
}
