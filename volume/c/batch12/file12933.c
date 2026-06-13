// fichero 12933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12933;

Registro12933 crear_registro12933(int id) {
    Registro12933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12933(Registro12933 r) {
    return r.valor + r.id;
}
