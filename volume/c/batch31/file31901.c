// fichero 31901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31901;

Registro31901 crear_registro31901(int id) {
    Registro31901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31901(Registro31901 r) {
    return r.valor + r.id;
}
