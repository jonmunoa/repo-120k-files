// fichero 31309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31309;

Registro31309 crear_registro31309(int id) {
    Registro31309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31309(Registro31309 r) {
    return r.valor + r.id;
}
