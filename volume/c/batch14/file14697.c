// fichero 14697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14697;

Registro14697 crear_registro14697(int id) {
    Registro14697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14697(Registro14697 r) {
    return r.valor + r.id;
}
