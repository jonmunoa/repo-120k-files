// fichero 18593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18593;

Registro18593 crear_registro18593(int id) {
    Registro18593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18593(Registro18593 r) {
    return r.valor + r.id;
}
