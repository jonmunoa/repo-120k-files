// fichero 18225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18225;

Registro18225 crear_registro18225(int id) {
    Registro18225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18225(Registro18225 r) {
    return r.valor + r.id;
}
