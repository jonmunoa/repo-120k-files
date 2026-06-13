// fichero 31153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31153;

Registro31153 crear_registro31153(int id) {
    Registro31153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31153(Registro31153 r) {
    return r.valor + r.id;
}
