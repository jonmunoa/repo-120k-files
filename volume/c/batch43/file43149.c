// fichero 43149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43149;

Registro43149 crear_registro43149(int id) {
    Registro43149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43149(Registro43149 r) {
    return r.valor + r.id;
}
