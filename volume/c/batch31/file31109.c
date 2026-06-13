// fichero 31109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31109;

Registro31109 crear_registro31109(int id) {
    Registro31109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31109(Registro31109 r) {
    return r.valor + r.id;
}
