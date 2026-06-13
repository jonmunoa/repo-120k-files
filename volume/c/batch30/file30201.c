// fichero 30201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30201;

Registro30201 crear_registro30201(int id) {
    Registro30201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30201(Registro30201 r) {
    return r.valor + r.id;
}
