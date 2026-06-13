// fichero 37753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37753;

Registro37753 crear_registro37753(int id) {
    Registro37753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37753(Registro37753 r) {
    return r.valor + r.id;
}
