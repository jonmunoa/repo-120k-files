// fichero 47133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47133;

Registro47133 crear_registro47133(int id) {
    Registro47133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47133(Registro47133 r) {
    return r.valor + r.id;
}
