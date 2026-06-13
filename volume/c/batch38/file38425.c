// fichero 38425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38425;

Registro38425 crear_registro38425(int id) {
    Registro38425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38425(Registro38425 r) {
    return r.valor + r.id;
}
