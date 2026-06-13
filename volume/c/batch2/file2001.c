// fichero 2001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2001;

Registro2001 crear_registro2001(int id) {
    Registro2001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2001(Registro2001 r) {
    return r.valor + r.id;
}
