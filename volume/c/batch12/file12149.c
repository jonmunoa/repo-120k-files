// fichero 12149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12149;

Registro12149 crear_registro12149(int id) {
    Registro12149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12149(Registro12149 r) {
    return r.valor + r.id;
}
