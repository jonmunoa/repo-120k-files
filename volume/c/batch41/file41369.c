// fichero 41369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41369;

Registro41369 crear_registro41369(int id) {
    Registro41369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41369(Registro41369 r) {
    return r.valor + r.id;
}
