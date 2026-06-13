// fichero 53901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53901;

Registro53901 crear_registro53901(int id) {
    Registro53901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53901(Registro53901 r) {
    return r.valor + r.id;
}
