// fichero 49721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49721;

Registro49721 crear_registro49721(int id) {
    Registro49721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49721(Registro49721 r) {
    return r.valor + r.id;
}
