// fichero 31573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31573;

Registro31573 crear_registro31573(int id) {
    Registro31573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31573(Registro31573 r) {
    return r.valor + r.id;
}
