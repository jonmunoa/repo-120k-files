// fichero 35485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35485;

Registro35485 crear_registro35485(int id) {
    Registro35485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35485(Registro35485 r) {
    return r.valor + r.id;
}
