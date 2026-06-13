// fichero 52985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52985;

Registro52985 crear_registro52985(int id) {
    Registro52985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52985(Registro52985 r) {
    return r.valor + r.id;
}
