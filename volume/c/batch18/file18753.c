// fichero 18753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18753;

Registro18753 crear_registro18753(int id) {
    Registro18753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18753(Registro18753 r) {
    return r.valor + r.id;
}
