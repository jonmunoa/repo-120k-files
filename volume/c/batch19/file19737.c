// fichero 19737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19737;

Registro19737 crear_registro19737(int id) {
    Registro19737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19737(Registro19737 r) {
    return r.valor + r.id;
}
