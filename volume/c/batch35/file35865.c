// fichero 35865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35865;

Registro35865 crear_registro35865(int id) {
    Registro35865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35865(Registro35865 r) {
    return r.valor + r.id;
}
