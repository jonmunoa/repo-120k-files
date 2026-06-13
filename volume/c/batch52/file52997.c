// fichero 52997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52997;

Registro52997 crear_registro52997(int id) {
    Registro52997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52997(Registro52997 r) {
    return r.valor + r.id;
}
