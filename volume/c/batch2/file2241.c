// fichero 2241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2241;

Registro2241 crear_registro2241(int id) {
    Registro2241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2241(Registro2241 r) {
    return r.valor + r.id;
}
