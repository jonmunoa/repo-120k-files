// fichero 35833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35833;

Registro35833 crear_registro35833(int id) {
    Registro35833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35833(Registro35833 r) {
    return r.valor + r.id;
}
