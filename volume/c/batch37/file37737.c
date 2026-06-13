// fichero 37737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37737;

Registro37737 crear_registro37737(int id) {
    Registro37737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37737(Registro37737 r) {
    return r.valor + r.id;
}
