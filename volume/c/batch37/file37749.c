// fichero 37749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37749;

Registro37749 crear_registro37749(int id) {
    Registro37749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37749(Registro37749 r) {
    return r.valor + r.id;
}
