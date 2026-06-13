// fichero 20557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20557;

Registro20557 crear_registro20557(int id) {
    Registro20557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20557(Registro20557 r) {
    return r.valor + r.id;
}
