// fichero 12017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12017;

Registro12017 crear_registro12017(int id) {
    Registro12017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12017(Registro12017 r) {
    return r.valor + r.id;
}
