// fichero 35849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35849;

Registro35849 crear_registro35849(int id) {
    Registro35849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35849(Registro35849 r) {
    return r.valor + r.id;
}
