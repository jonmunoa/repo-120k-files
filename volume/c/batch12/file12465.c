// fichero 12465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12465;

Registro12465 crear_registro12465(int id) {
    Registro12465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12465(Registro12465 r) {
    return r.valor + r.id;
}
