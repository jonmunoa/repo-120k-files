// fichero 35057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35057;

Registro35057 crear_registro35057(int id) {
    Registro35057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35057(Registro35057 r) {
    return r.valor + r.id;
}
