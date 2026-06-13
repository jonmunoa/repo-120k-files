// fichero 38657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38657;

Registro38657 crear_registro38657(int id) {
    Registro38657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38657(Registro38657 r) {
    return r.valor + r.id;
}
