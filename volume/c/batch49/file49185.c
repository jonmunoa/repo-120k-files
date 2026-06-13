// fichero 49185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49185;

Registro49185 crear_registro49185(int id) {
    Registro49185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49185(Registro49185 r) {
    return r.valor + r.id;
}
