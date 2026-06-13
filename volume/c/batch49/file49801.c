// fichero 49801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49801;

Registro49801 crear_registro49801(int id) {
    Registro49801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49801(Registro49801 r) {
    return r.valor + r.id;
}
