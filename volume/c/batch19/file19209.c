// fichero 19209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19209;

Registro19209 crear_registro19209(int id) {
    Registro19209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19209(Registro19209 r) {
    return r.valor + r.id;
}
