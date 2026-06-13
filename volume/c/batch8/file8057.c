// fichero 8057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8057;

Registro8057 crear_registro8057(int id) {
    Registro8057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8057(Registro8057 r) {
    return r.valor + r.id;
}
