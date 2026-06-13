// fichero 42153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42153;

Registro42153 crear_registro42153(int id) {
    Registro42153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42153(Registro42153 r) {
    return r.valor + r.id;
}
