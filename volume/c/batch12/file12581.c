// fichero 12581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12581;

Registro12581 crear_registro12581(int id) {
    Registro12581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12581(Registro12581 r) {
    return r.valor + r.id;
}
