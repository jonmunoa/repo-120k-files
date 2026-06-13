// fichero 2753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2753;

Registro2753 crear_registro2753(int id) {
    Registro2753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2753(Registro2753 r) {
    return r.valor + r.id;
}
