// fichero 12661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12661;

Registro12661 crear_registro12661(int id) {
    Registro12661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12661(Registro12661 r) {
    return r.valor + r.id;
}
