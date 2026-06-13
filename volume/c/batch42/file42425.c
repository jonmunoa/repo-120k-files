// fichero 42425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42425;

Registro42425 crear_registro42425(int id) {
    Registro42425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42425(Registro42425 r) {
    return r.valor + r.id;
}
