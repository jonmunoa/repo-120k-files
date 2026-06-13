// fichero 48753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48753;

Registro48753 crear_registro48753(int id) {
    Registro48753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48753(Registro48753 r) {
    return r.valor + r.id;
}
