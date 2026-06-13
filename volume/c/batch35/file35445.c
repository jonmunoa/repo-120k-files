// fichero 35445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35445;

Registro35445 crear_registro35445(int id) {
    Registro35445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35445(Registro35445 r) {
    return r.valor + r.id;
}
