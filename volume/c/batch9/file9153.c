// fichero 9153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9153;

Registro9153 crear_registro9153(int id) {
    Registro9153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9153(Registro9153 r) {
    return r.valor + r.id;
}
