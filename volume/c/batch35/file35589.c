// fichero 35589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35589;

Registro35589 crear_registro35589(int id) {
    Registro35589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35589(Registro35589 r) {
    return r.valor + r.id;
}
