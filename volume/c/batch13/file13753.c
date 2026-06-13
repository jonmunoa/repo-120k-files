// fichero 13753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13753;

Registro13753 crear_registro13753(int id) {
    Registro13753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13753(Registro13753 r) {
    return r.valor + r.id;
}
