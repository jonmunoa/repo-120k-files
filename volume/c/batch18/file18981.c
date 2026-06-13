// fichero 18981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18981;

Registro18981 crear_registro18981(int id) {
    Registro18981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18981(Registro18981 r) {
    return r.valor + r.id;
}
