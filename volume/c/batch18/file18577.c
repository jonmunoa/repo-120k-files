// fichero 18577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18577;

Registro18577 crear_registro18577(int id) {
    Registro18577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18577(Registro18577 r) {
    return r.valor + r.id;
}
