// fichero 12169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12169;

Registro12169 crear_registro12169(int id) {
    Registro12169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12169(Registro12169 r) {
    return r.valor + r.id;
}
