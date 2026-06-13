// fichero 30777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30777;

Registro30777 crear_registro30777(int id) {
    Registro30777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30777(Registro30777 r) {
    return r.valor + r.id;
}
