// fichero 8001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8001;

Registro8001 crear_registro8001(int id) {
    Registro8001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8001(Registro8001 r) {
    return r.valor + r.id;
}
