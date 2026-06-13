// fichero 44981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44981;

Registro44981 crear_registro44981(int id) {
    Registro44981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44981(Registro44981 r) {
    return r.valor + r.id;
}
