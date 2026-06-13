// fichero 31877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31877;

Registro31877 crear_registro31877(int id) {
    Registro31877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31877(Registro31877 r) {
    return r.valor + r.id;
}
