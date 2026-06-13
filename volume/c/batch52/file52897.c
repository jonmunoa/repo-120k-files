// fichero 52897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52897;

Registro52897 crear_registro52897(int id) {
    Registro52897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52897(Registro52897 r) {
    return r.valor + r.id;
}
