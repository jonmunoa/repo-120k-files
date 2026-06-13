// fichero 40057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40057;

Registro40057 crear_registro40057(int id) {
    Registro40057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40057(Registro40057 r) {
    return r.valor + r.id;
}
