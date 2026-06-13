// fichero 33569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33569;

Registro33569 crear_registro33569(int id) {
    Registro33569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33569(Registro33569 r) {
    return r.valor + r.id;
}
