// fichero 36765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36765;

Registro36765 crear_registro36765(int id) {
    Registro36765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36765(Registro36765 r) {
    return r.valor + r.id;
}
