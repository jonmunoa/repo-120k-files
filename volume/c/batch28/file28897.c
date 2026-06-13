// fichero 28897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28897;

Registro28897 crear_registro28897(int id) {
    Registro28897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28897(Registro28897 r) {
    return r.valor + r.id;
}
