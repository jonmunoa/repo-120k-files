// fichero 1837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1837;

Registro1837 crear_registro1837(int id) {
    Registro1837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1837(Registro1837 r) {
    return r.valor + r.id;
}
