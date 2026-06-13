// fichero 19901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19901;

Registro19901 crear_registro19901(int id) {
    Registro19901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19901(Registro19901 r) {
    return r.valor + r.id;
}
