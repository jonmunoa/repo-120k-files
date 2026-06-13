// fichero 12977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12977;

Registro12977 crear_registro12977(int id) {
    Registro12977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12977(Registro12977 r) {
    return r.valor + r.id;
}
