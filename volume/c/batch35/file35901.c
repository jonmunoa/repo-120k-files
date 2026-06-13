// fichero 35901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35901;

Registro35901 crear_registro35901(int id) {
    Registro35901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35901(Registro35901 r) {
    return r.valor + r.id;
}
