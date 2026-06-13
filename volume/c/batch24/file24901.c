// fichero 24901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24901;

Registro24901 crear_registro24901(int id) {
    Registro24901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24901(Registro24901 r) {
    return r.valor + r.id;
}
