// fichero 31805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31805;

Registro31805 crear_registro31805(int id) {
    Registro31805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31805(Registro31805 r) {
    return r.valor + r.id;
}
