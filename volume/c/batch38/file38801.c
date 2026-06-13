// fichero 38801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38801;

Registro38801 crear_registro38801(int id) {
    Registro38801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38801(Registro38801 r) {
    return r.valor + r.id;
}
