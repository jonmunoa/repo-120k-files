// fichero 18117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18117;

Registro18117 crear_registro18117(int id) {
    Registro18117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18117(Registro18117 r) {
    return r.valor + r.id;
}
