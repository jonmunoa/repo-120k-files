// fichero 26481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26481;

Registro26481 crear_registro26481(int id) {
    Registro26481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26481(Registro26481 r) {
    return r.valor + r.id;
}
