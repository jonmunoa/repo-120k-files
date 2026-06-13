// fichero 36893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36893;

Registro36893 crear_registro36893(int id) {
    Registro36893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36893(Registro36893 r) {
    return r.valor + r.id;
}
